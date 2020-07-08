#include <Pokitto.h>
#include <File>
#include "background.h"
#include "sprites.h"

#define STARTTILE 96
#define NUMSPRITES 10

struct SPRITE_DATA {
  uint8_t x;  // x postition
  uint8_t y;  // y position
  uint8_t tile; // tile number
  uint8_t offset; // tile render pixel offset
  bool active;
} sprites[NUMSPRITES];


unsigned long framecount=0; // fps counter
unsigned long lastMillis; // fps counter

char tempText[32]; // text buffer
uint8_t fpsCount=0;

#include "gfx.h"
#include "updateScreen.h"

using PC=Pokitto::Core;
using PD=Pokitto::Display;
using PB=Pokitto::Buttons;

inline void loadLevel(const uint8_t *buffer){
    memcpy(&myMap[0], &buffer[0], sizeof(myMap));
}

void loadBackdrop(char* filename){
    int x=0, y=0;
    
    write_command_(0x20);  // Horizontal DRAM Address
    write_data_(y);  // 0
    write_command_(0x21);  // Vertical DRAM Address
    write_data_(x);
    write_command_(0x22); // write data to DRAM

	File testRead;
	testRead.openRO(filename);

	    uint8_t color[330];	
		for(int y=0; y<176*2; y++){
            CLR_CS_SET_CD_RD_WR;
		    testRead.read(&color, 330);
            int s=0;
            for(x=0; x<330;){
                uint8_t r = color[x++];
                uint8_t g = color[x++];
                uint8_t b = color[x++];
                uint16_t rgb = ((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3);
                write_data_(rgb);
            }
		}
		testRead.close();
}


// print text
void print(char x, char y, const char* text) {
    uint8_t numChars = strlen(text);
    uint8_t x1 = x+myMap[0]*y;
    for (uint8_t t = 0; t < numChars; t++) {
        uint8_t character = text[t] - 32;
        myMap[2+x1++]=character+138;
    }
}

int main(){
    using PC=Pokitto::Core;
    using PD=Pokitto::Display;
    PC::begin();
    PD::persistence = true;
//    PD::invisiblecolor = 0;
//    PD::adjustCharStep = 0;
//    PD::adjustLineStep = 0;
//    PD::directbgcolor = PD::invisiblecolor;

//    loadBackdrop("eye.raw");
    
    PD::print("Test");

    loadLevel(levelMap);
    lastMillis = PC::getTime();

    int scroll=0;
    while( PC::isRunning() ){
            
        if( !PC::update())
            continue;

        framecount++;
        if(PC::getTime() >= lastMillis+1000){
            lastMillis = PC::getTime();
            fpsCount = framecount;
            framecount = 0;
        }

        drawFullMap2();
        sprintf(tempText, "%02d FPS", fpsCount);
        print(0,0,tempText);
        
    }

}