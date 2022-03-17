//aracely heredia
//aracelyheredia@my.unt.edu

#include "major1.h"

void endian(unsigned long int p)
{

unsigned long int swap; //will store the final result

 
int B0; //first byte (least significant)
int B1; //second byte
int B2; //third byte
int B3; //fourth byte (most significant)


B0=(p & 0x000000FF) >> 0; 
B1=(p & 0x0000FF00) >> 8;
B2=(p & 0x00FF0000) >> 16;
B3=(p & 0xFF000000) >> 24;

B0 <<= 24; //byte 0 swaps byte 3
B1 <<= 8;  //byte 1 swaps byte 2
B2 <<= 16; //byte 2 swaps byte 1
B3 <<= 0; //byte 3 swaps  byte 0

 

swap= ((B0)|(B2)|(B1)|(B3)); //result of swap

  printf("Endian swap of %ld gives %ld\n", p, swap);


  }
