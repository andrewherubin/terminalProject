#include "major1.h"
//Cody Hogan cqh0003 codyhogan2@my.unt.edu
//CSCE 3600.001
//DESCRIPTION: This program will print out the number of leading zeroes in a 32 
//bit binary integer.


void clz(unsigned long long int p){
	unsigned int lead = 0;	//initilize leading zeroes to 0
	unsigned long long int edit = p; //save p for the final print and copy to a temp variable
	int bin[32];	//32 bit binary array e.g. [0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1,1,0,0,0,0,0,1,1,0]
	for(int i=31; i>=0; i--){ //for all 32 bits, starting with 32 -> 0
		bin[i]= edit%2; //take the remainder of the integer/2 as the binary bit
		edit=edit/2; //complete the division by 2
	}
	for(int j=0; j<32; j++){ //now that the binary is stored, do for all 32 bits: 0 -> 32
	if(bin[j]==0){ //if the bit is 0
		lead=lead+1; //increment our counter
	}
	else{ //once there is ONE digit that isn't zero, the leading zeroes are complete
	break;	//leave since leading zeroes have all been documented
	}
	}
	printf("The number of leading zeroes in %lld is %d\n", p, lead); //print out our message c:
}