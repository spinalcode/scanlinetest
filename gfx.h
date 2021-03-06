#include <stdint.h>

const uint8_t levelMaps[][16*16]={
  {
  0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,
  0 ,3 ,13,13,13,13,13,13,13,13,13,13,13,13,3 ,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,12,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,12,0,
  0 ,3 ,13,13,13,13,13,13,13,13,13,13,13,13,3 ,0,
  0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,
  0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0,
  }
};

//Sprite sheet:16x16
const uint8_t alltiles [][34] ={
//[0] cell:0x0 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[1] cell:1x0 
{
0x0,0xBF,0xFB,0x0, 0x0,0x7F,0xF7,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[2] cell:2x0 
{
0xF,0xF0,0xFF,0x0, 0xF,0xF0,0xFF,0x0, 0xF,0x70,0xF7,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[3] cell:3x0 
{
0x0,0xF0,0xF0,0x0, 0x0,0xF0,0xF0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x0,0xF0,0xF0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x0,0xF0,0xF0,0x0, 0x0,0xF0,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[4] cell:4x0 
{
0x0,0xF,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0xFF,0x7F,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0x0,0xF,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0xF,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[5] cell:5x0 
{
0xBF,0xB0,0xFF,0x0, 0xF7,0xF7,0xFB,0x0, 0xBF,0xBB,0xF7,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xBB,0xFB, 0x0,0xBF,0x7F,0x7F, 0x0,0xFF,0xB,0xFB, 0x0,0x0,0x0,0x0, 
},
//[6] cell:6x0 
{
0x7F,0xF7,0x0,0x0, 0xF7,0x7F,0x0,0x0, 0xF7,0x7F,0x0,0xF0, 0x7F,0xF7,0x7,0xF0, 0xF7,0x7F,0x7F,0x70, 0xF7,0x7,0xF7,0x0, 0x7F,0xFF,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[7] cell:7x0 
{
0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0x70,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[8] cell:8x0 
{
0x0,0xBF,0xF0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xBF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[9] cell:9x0 
{
0x0,0xFF,0xB0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xFF,0xB0,0x0, 0x0,0x0,0x0,0x0, 
},
//[10] cell:10x0 
{
0x0,0xF,0x0,0x0, 0x0,0xBF,0xB0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x7B,0xFF,0xFB,0x70, 0x7,0xFF,0xF7,0x0, 0x7F,0xF7,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[11] cell:11x0 
{
0x0,0xB,0x0,0x0, 0x0,0xF,0x0,0x0, 0x0,0xF,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0x0,0xF,0x0,0x0, 0x0,0xF,0x0,0x0, 0x0,0xB,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[12] cell:12x0 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0x0,0x0,0x0, 
},
//[13] cell:13x0 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[14] cell:14x0 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[15] cell:15x0 
{
0x0,0x0,0xFF,0x0, 0x0,0x7,0xFB,0x0, 0x0,0xB,0xF7,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xB0,0x0, 0x0,0xBF,0x70,0x0, 0x0,0xFF,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[16] cell:0x1 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x0,0xBF,0xF0, 0xFF,0x7,0xBF,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0xB7,0xF,0xF0, 0xFF,0xB0,0xF,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[17] cell:1x1 
{
0x0,0xBF,0xF0,0x0, 0x0,0xFF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[18] cell:2x1 
{
0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x7F,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0xFF,0x0,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[19] cell:3x1 
{
0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x7F,0xF0, 0x0,0x0,0x7F,0xF0, 0x7,0xBF,0xFF,0x70, 0x0,0x0,0xF,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[20] cell:4x1 
{
0xBF,0xF0,0xFF,0x0, 0xFF,0x0,0xFF,0x0, 0xFF,0x0,0xFF,0x0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0xFF,0x0, 0x0,0x0,0xFF,0x0, 0x0,0x0,0xFF,0x0, 0x0,0x0,0x0,0x0, 
},
//[21] cell:5x1 
{
0xFF,0xFF,0xFF,0xF0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[22] cell:6x1 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xFF,0xFF,0xFF,0xB0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[23] cell:7x1 
{
0xFF,0xFF,0xFF,0xF0, 0x0,0x0,0x7F,0xF0, 0x0,0x7,0xFF,0x70, 0x0,0xF,0xF7,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[24] cell:8x1 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[25] cell:9x1 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x7F,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0x7F,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[26] cell:10x1 
{
0x0,0x0,0x0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7,0x70,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[27] cell:11x1 
{
0x0,0x0,0x0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7,0x70,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0x0,0x0,0x0, 
},
//[28] cell:12x1 
{
0x0,0x7,0xFF,0x0, 0x0,0x7F,0xF7,0x0, 0x7,0xFF,0x70,0x0, 0xF,0xF7,0x0,0x0, 0x7,0xFF,0x70,0x0, 0x0,0x7F,0xF7,0x0, 0x0,0x7,0xFF,0x0, 0x0,0x0,0x0,0x0, 
},
//[29] cell:13x1 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[30] cell:14x1 
{
0x0,0xFF,0x70,0x0, 0x0,0x7F,0xF7,0x0, 0x0,0x7,0xFF,0x70, 0x0,0x0,0x7F,0xF0, 0x0,0x7,0xFF,0x70, 0x0,0x7F,0xF7,0x0, 0x0,0xFF,0x70,0x0, 0x0,0x0,0x0,0x0, 
},
//[31] cell:15x1 
{
0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0xF,0xF0, 0x0,0xBF,0xFF,0xB0, 0x0,0xFF,0x0,0x0, 0x0,0x77,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[32] cell:0x2 
{
0x7F,0xFF,0xFF,0x70, 0xFB,0x0,0xB,0xF0, 0xF0,0xBF,0xF0,0xF0, 0xF0,0xF0,0xF0,0xF0, 0xF0,0xBF,0xFF,0xF0, 0xFB,0x0,0x0,0x0, 0x7F,0xFF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[33] cell:1x2 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0xFF,0xFF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[34] cell:2x2 
{
0xFF,0xFF,0xFF,0xB0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[35] cell:3x2 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[36] cell:4x2 
{
0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0xBF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xBF,0xF0, 0xFF,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[37] cell:5x2 
{
0xBF,0xFF,0xFF,0xF0, 0xFF,0x70,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0xFF,0xF0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[38] cell:6x2 
{
0xBF,0xFF,0xFF,0xF0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0xFF,0xF0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[39] cell:7x2 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0xF,0xFF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[40] cell:8x2 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0xFF,0xFF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[41] cell:9x2 
{
0xFF,0xFF,0xFF,0x70, 0x7,0xFF,0x70,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x7,0xFF,0x70,0x0, 0xFF,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[42] cell:10x2 
{
0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[43] cell:11x2 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x7,0xFF,0x70, 0xFF,0xFF,0xF7,0x0, 0xFF,0x7,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[44] cell:12x2 
{
0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[45] cell:13x2 
{
0xFF,0x70,0x7F,0xF0, 0xFF,0xF7,0xFF,0xF0, 0xFF,0xFF,0xFF,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[46] cell:14x2 
{
0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0xBF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[47] cell:15x2 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[48] cell:0x3 
{
0xFF,0xFF,0xFF,0xB0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0xB0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[49] cell:1x3 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF7,0xF0, 0xFF,0x0,0x7F,0x70, 0xBF,0xFF,0xF7,0xF0, 0x0,0x0,0x0,0x0, 
},
//[50] cell:2x3 
{
0xFF,0xFF,0xFF,0xB0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[51] cell:3x3 
{
0xBF,0xFF,0xFF,0xB0, 0xFF,0x70,0x0,0x0, 0xFF,0x70,0x0,0x0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x7F,0xF0, 0x0,0x0,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[52] cell:4x3 
{
0x7F,0xFF,0xFF,0xF7, 0x0,0x7F,0xF7,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[53] cell:5x3 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[54] cell:6x3 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x7,0xFF,0xB0, 0xFF,0x7F,0xFB,0x0, 0xFF,0xFF,0xB0,0x0, 0xFF,0xFB,0x0,0x0, 0xFF,0xB0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[55] cell:7x3 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x7,0xF,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0xFF,0xFF,0xF0, 0xFF,0xF7,0xFF,0xF0, 0xBF,0x70,0x7F,0xB0, 0x0,0x0,0x0,0x0, 
},
//[56] cell:8x3 
{
0xFF,0x70,0x7F,0xF0, 0xFF,0xF7,0xFF,0xF0, 0x7F,0xFF,0xFF,0x70, 0x7,0xFF,0xF7,0x0, 0x7F,0xFF,0xFF,0x70, 0xFF,0xF7,0xFF,0xF0, 0xFF,0x70,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[57] cell:9x3 
{
0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0xBF,0xFF,0xFF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0xBF,0xFF,0xFF,0xB0, 0x0,0x0,0x0,0x0, 
},
//[58] cell:10x3 
{
0xFF,0xFF,0xFF,0xF0, 0x0,0x7,0xFF,0xF0, 0x0,0x7F,0xFF,0x70, 0x7,0xFF,0xF7,0x0, 0x7F,0xFF,0x70,0x0, 0xFF,0xF7,0x0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[59] cell:11x3 
{
0x0,0xFF,0xF0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xFF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[60] cell:12x3 
{
0x0,0xFF,0x0,0x0, 0x0,0xBF,0x70,0x0, 0x0,0x7F,0xB0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xB,0xF7,0x0, 0x0,0x7,0xFB,0x0, 0x0,0x0,0xFF,0x0, 0x0,0x0,0x0,0x0, 
},
//[61] cell:13x3 
{
0x0,0xFF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xFF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[62] cell:14x3 
{
0x0,0x7F,0x70,0x0, 0x7,0xFF,0xF7,0x0, 0x7F,0xF7,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[63] cell:15x3 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[64] cell:0x4 
{
0x0,0xFF,0x70,0x0, 0x0,0xFF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0x7,0xF0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[65] cell:1x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xF,0xFF,0xFF,0x70, 0x0,0x0,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0xFF,0x70,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[66] cell:2x4 
{
0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[67] cell:3x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0xF0, 0xFF,0x70,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x70,0x0,0x0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[68] cell:4x4 
{
0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0xFF,0x70,0xF,0xF0, 0xFF,0x70,0xF,0xF0, 0xFF,0x70,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[69] cell:5x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x70,0x0,0x0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[70] cell:6x4 
{
0x0,0x7F,0xFF,0xF0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x7F,0xFF,0xFB,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[71] cell:7x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0xFF,0x70,0x7F,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 
},
//[72] cell:8x4 
{
0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[73] cell:9x4 
{
0x0,0xF,0xF0,0x0, 0x0,0x7,0x70,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[74] cell:10x4 
{
0x0,0x0,0xF,0xF0, 0x0,0x0,0x7,0x70, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 0xF,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[75] cell:11x4 
{
0xF,0xF0,0x0,0x0, 0xF,0xF0,0x0,0x0, 0xF,0xF0,0x7F,0xF0, 0xF,0xF7,0xFF,0x70, 0xF,0xFF,0xF7,0x0, 0xF,0xF7,0xFF,0x70, 0xF,0xF0,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[76] cell:12x4 
{
0x0,0xFF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[77] cell:13x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[78] cell:14x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[79] cell:15x4 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[80] cell:0x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x7F,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 
},
//[81] cell:1x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0xF0, 0xFF,0x70,0xF,0xF0, 0xFF,0x70,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0xF,0xF0, 0x0,0x0,0xF,0xF0, 
},
//[82] cell:2x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFB,0x70, 0xFF,0x70,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0xFF,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[83] cell:3x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x70,0x0,0x0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0xF,0xF0, 0xFF,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[84] cell:4x5 
{
0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0xB,0xFF,0xFF,0xB0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[85] cell:5x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0x7F,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[86] cell:6x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0x7F,0xF0, 0xFF,0x7,0xFF,0xB0, 0xFF,0x7F,0xFB,0x0, 0xFF,0xFF,0xB0,0x0, 0x0,0x0,0x0,0x0, 
},
//[87] cell:7x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0xFF,0x7F,0x7F,0xF0, 0x7F,0xFF,0xFF,0x70, 0x0,0x0,0x0,0x0, 
},
//[88] cell:8x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0x70,0x7F,0xF0, 0x7F,0xF7,0xFF,0x70, 0x7,0xFF,0xF7,0x0, 0x7F,0xF7,0xFF,0x70, 0xFF,0x70,0x7F,0xF0, 0x0,0x0,0x0,0x0, 
},
//[89] cell:9x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0x0,0xF,0xF0, 0xFF,0x0,0xF,0xF0, 0xFF,0x70,0xF,0xF0, 0x7F,0xFF,0xFF,0xF0, 0x0,0x0,0x7F,0xF0, 0xFF,0xFF,0xFF,0x70, 
},
//[90] cell:10x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x0,0x0,0x7F,0xF0, 0x7F,0xFF,0xFF,0x70, 0xFF,0x70,0x0,0x0, 0xFF,0xFF,0xFF,0xF0, 0x0,0x0,0x0,0x0, 
},
//[91] cell:11x5 
{
0x0,0xBF,0xF0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xFF,0x0,0x0, 0xF,0xFF,0x0,0x0, 0x0,0xFF,0x0,0x0, 0x0,0xFF,0x70,0x0, 0x0,0xBF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[92] cell:12x5 
{
0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xB,0xB0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x0,0x0,0x0, 
},
//[93] cell:13x5 
{
0x0,0xFF,0xB0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xF,0xF0,0x0, 0x0,0xF,0xFF,0x0, 0x0,0xF,0xF0,0x0, 0x0,0x7F,0xF0,0x0, 0x0,0xFF,0xB0,0x0, 0x0,0x0,0x0,0x0, 
},
//[94] cell:14x5 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x7B,0xFB,0x70,0x0, 0xFF,0xFF,0xB7,0x7B, 0xB7,0x7B,0xFF,0xFF, 0x0,0x7,0xBF,0xB7, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[95] cell:15x5 
{
0x0,0x7,0xFF,0x70, 0x0,0xF,0x0,0xF0, 0x7F,0xFF,0x70,0xB0, 0x0,0x7F,0xFF,0x70, 0xBF,0xBF,0x0,0x0, 0xF0,0xF,0x0,0x0, 0x7F,0xF7,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[96] cell:0x6 
{
0x10,0x10,0x10,0x10, 0x1,0x1,0x1,0x1, 0x10,0x10,0x10,0x10, 0x1,0x1,0x1,0x1, 0x10,0x10,0x10,0x10, 0x1,0x1,0x1,0x1, 0x10,0x10,0x10,0x10, 0x1,0x1,0x1,0x1, 
},
//[97] cell:1x6 
{
0xFF,0xFF,0xFF,0xF8, 0xFB,0xB8,0x8B,0xB4, 0xF8,0x8B,0xBF,0xF4, 0xFB,0xBF,0xFB,0xB4, 0xFF,0xFB,0xB8,0x84, 0xFB,0xB8,0x8B,0xB4, 0xF8,0x8B,0xBF,0xF4, 0x84,0x44,0x44,0x44, 
},
//[98] cell:2x6 
{
0xFF,0xFF,0xFF,0xF8, 0xFB,0xB8,0x8B,0xB4, 0xF8,0x8B,0xBF,0xF4, 0xFB,0xBF,0xFB,0xB4, 0xFF,0xFB,0xB8,0x84, 0xFB,0xB8,0x8B,0xB4, 0xF8,0x8B,0xBF,0xF4, 0x84,0x44,0x44,0x44, 
},
//[99] cell:3x6 
{
0xFF,0xFF,0xFF,0xFB, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xB4,0x44,0x44,0x44, 
},
//[100] cell:4x6 
{
0xFF,0xFF,0xFF,0xFB, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 
},
//[101] cell:5x6 
{
0xFF,0xFF,0xFF,0xFB, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 
},
//[102] cell:6x6 
{
0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xB4,0x44,0x44,0x44, 
},
//[103] cell:7x6 
{
0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0x44,0x44,0x44,0x44, 
},
//[104] cell:8x6 
{
0xFF,0xFF,0xFF,0xFF, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xFB,0xBB,0xBB,0xBB, 0xB4,0x44,0x44,0x44, 
},
//[105] cell:9x6 
{
0xFF,0xFF,0xFF,0xFB, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0xBB,0xBB,0xBB,0xB4, 0x44,0x44,0x44,0x44, 
},
//[106] cell:10x6 
{
0xFF,0xFF,0xFF,0xFB, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 
},
//[107] cell:11x6 
{
0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xB4,0x44,0x44,0x44, 
},
//[108] cell:12x6 
{
0xFF,0xFB,0xBF,0xFB, 0xFB,0xB4,0x4B,0xB4, 0xFB,0xB4,0x4B,0xB4, 0xFB,0xB4,0x4B,0xB4, 0xFB,0xB4,0x4B,0xB4, 0xFB,0xB4,0x4B,0xB4, 0xFB,0xB4,0x4B,0xB4, 0xB4,0x40,0x4,0x44, 
},
//[109] cell:13x6 
{
0xFF,0xFF,0xFF,0xFB, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xB4,0x44,0x44,0x40, 0xB4,0x44,0x44,0x40, 0xFB,0xBB,0xBB,0xB4, 0xFB,0xBB,0xBB,0xB4, 0xB4,0x44,0x44,0x44, 
},
//[110] cell:14x6 
{
0xFF,0xFF,0xFF,0xFF, 0xF1,0x1B,0x1B,0x1B, 0xF1,0xBB,0x1B,0x1B, 0xF1,0x1B,0xB1,0xBB, 0xF1,0xBB,0x1B,0x1B, 0xF1,0x1B,0x1B,0x1B, 0xFB,0xBB,0xBB,0xBB, 0xB4,0x44,0x44,0x44, 
},
//[111] cell:15x6 
{
0xFF,0xFF,0xFF,0xFB, 0x11,0x1B,0x11,0x14, 0xB1,0xBB,0xB1,0xB4, 0xB1,0xBB,0xB1,0xB4, 0xB1,0xBB,0xB1,0xB4, 0x11,0x1B,0xB1,0xB4, 0xBB,0xBB,0xBB,0xB4, 0x44,0x44,0x44,0x44, 
},
//[112] cell:0x7 
{
0x0,0x0,0x3,0x47, 0x0,0x2,0x48,0xAA, 0x0,0x26,0x8A,0xAA, 0x1,0x67,0x8A,0xAC, 0x2,0x78,0xAA,0xCC, 0x2,0x79,0xAA,0xCC, 0x4,0x79,0xAA,0xCC, 0x5,0x78,0xAA,0xAC, 
},
//[113] cell:1x7 
{
0x77,0x40,0x0,0x0, 0xAA,0xA7,0x40,0x0, 0xCC,0xCC,0xB4,0x0, 0xCC,0xCC,0xCB,0x30, 0xCD,0xED,0xCC,0x91, 0xCE,0xEE,0xDC,0x83, 0xCD,0xED,0xCC,0xB7, 0xCC,0xDC,0xCC,0xB7, 
},
//[114] cell:2x7 
{
0x4,0x78,0xAA,0xAB, 0x4,0x67,0x8A,0xAA, 0x4,0x67,0x7A,0xAA, 0x2,0x45,0x77,0xAA, 0x1,0x44,0x67,0x77, 0x0,0x15,0x47,0x77, 0x1,0x2,0x44,0x47, 0x0,0x0,0x3,0x44, 
},
//[115] cell:3x7 
{
0xCC,0xCC,0xCB,0xA7, 0xBC,0xCC,0xBA,0xA5, 0xAA,0xBB,0xAA,0xA4, 0xAA,0xAA,0xAA,0x61, 0xAA,0xAA,0x87,0x50, 0x77,0x77,0x85,0x11, 0x77,0x87,0x52,0x0, 0x45,0x20,0x0,0x0, 
},
//[116] cell:4x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[117] cell:5x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[118] cell:6x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[119] cell:7x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[120] cell:8x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[121] cell:9x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[122] cell:10x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[123] cell:11x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[124] cell:12x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[125] cell:13x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[126] cell:14x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[127] cell:15x7 
{
0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 0x0,0x0,0x0,0x0, 
},
//[128] cell:0x8 
{
0x0,0x0,0x0,0xF, 0x0,0xFF,0x0,0xF, 0x0,0xF0,0x0,0xF, 0x0,0x0,0x0,0xF, 0x0,0x0,0xF0,0xF, 0x0,0xF,0xF0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[129] cell:1x8 
{
0xFF,0x0,0xF,0xFF, 0xFF,0x0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xFF,0xFF,0xFF, 
},
//[130] cell:2x8 
{
0x0,0x0,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0x0,0x0,0x0,0xF, 0x0,0xFF,0xFF,0xFF, 0x0,0xF,0xFF,0xFF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[131] cell:3x8 
{
0x0,0x0,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0xF0,0x0,0x0,0xF, 0xFF,0xFF,0xF0,0xF, 0xFF,0xFF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[132] cell:4x8 
{
0x0,0xF,0x0,0xFF, 0x0,0xFF,0x0,0xFF, 0x0,0xFF,0x0,0xFF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0x0,0xFF, 0xFF,0xFF,0x0,0xFF, 0xFF,0xFF,0x0,0xFF, 0xFF,0xFF,0xFF,0xFF, 
},
//[133] cell:5x8 
{
0x0,0x0,0x0,0xF, 0x0,0xFF,0xFF,0xFF, 0x0,0xFF,0xFF,0xFF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xF0,0xF, 0xFF,0xFF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[134] cell:6x8 
{
0x0,0x0,0x0,0xF, 0x0,0xF,0xFF,0xFF, 0x0,0xF,0xFF,0xFF, 0x0,0x0,0x0,0xF, 0x0,0xFF,0xF0,0xF, 0x0,0xF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[135] cell:7x8 
{
0x0,0x0,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0xFF,0xF0,0x0,0xF, 0xFF,0xF0,0x0,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xF0,0xF,0xFF, 0xFF,0xFF,0xFF,0xFF, 
},
//[136] cell:8x8 
{
0x0,0x0,0x0,0xF, 0x0,0xF,0x0,0xF, 0x0,0xFF,0xF0,0xF, 0x0,0x0,0x0,0xF, 0x0,0xFF,0xF0,0xF, 0x0,0xF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
},
//[137] cell:9x8 
{
0x0,0x0,0x0,0xF, 0x0,0xF,0x0,0xF, 0x0,0xF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0xFF,0xFF,0x0,0xF, 0x0,0x0,0x0,0xF, 0xFF,0xFF,0xFF,0xFF, 
}
};
