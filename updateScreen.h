void write_command_(uint16_t data)
{
    CLR_CS; // select lcd
    CLR_CD; // clear CD = command
    SET_RD; // RD high, do not read
    SET_MASK_P2;
    LPC_GPIO_PORT->MPIN[2] = (data<<3); // write bits to port
    CLR_MASK_P2;
    CLR_WR_SLOW;  // WR low
    SET_WR;  // WR low, then high = write strobe
    SET_CS; // de-select lcd
}

/**************************************************************************/
/*!
  @brief  Write data to the lcd, 16-bit bus
*/
/**************************************************************************/
void write_data_(uint16_t data)
{
    CLR_CS;
    SET_CD;
    SET_RD;
    SET_MASK_P2;
    LPC_GPIO_PORT->MPIN[2] = (data<<3); // write bits to port
    CLR_MASK_P2;
    CLR_WR;
    SET_WR;
    SET_CS;
}



void drawFullMap2(){
    
    // Put screen in correct mode
    write_command_(0x03);
    write_data_(0x1038);    // Horizontal filling
    write_command_(0x20);   // Horizontal DRAM Address
    write_data_(0);         // 0
    write_command_(0x21);   // Vertical DRAM Address
    write_data_(0);         // 0
    write_command_(0x22);   // write data to DRAM

    uint8_t line[220];

    for(uint32_t y = 0; y < 176; y++){
        // tile map
        #define bgTileSizeH 8
        #define bgTileSizeW 8
        #define tbt 64 // 8*8
        
        uint32_t x=0;
        uint32_t tileIndex = (y/bgTileSizeH) * levelMap[0];
        uint32_t jStart = y <<29>>26;
    
        uint32_t tileStart;
        uint32_t lineOffset;
    
        #define bgTileLine()\
            tileStart = myMap[2+tileIndex++]*tbt;\
            lineOffset = tileStart + jStart;\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];
    
        // half tile for the last column
        #define bgHalfTileLine()\
            tileStart = levelMap[2+tileIndex++]*tbt;\
            lineOffset = tileStart + jStart;\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];\
            line[x++] = bg_Tiles[lineOffset++];
    
        for(uint32_t c=0; c<25; c++){
            bgTileLine();
        }
        bgTileLine();
        bgTileLine();
        bgHalfTileLine();

        //for (uint32_t i = 0; i < 220;){
        //    write_data_(line[i++]);
        //}
        flushLine(balls_pal, line);
    }
}

