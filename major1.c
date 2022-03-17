#include "major1.h"
//Group 10: Cody Hogan, Andrew Herubin, Aracely Heredia, Walter Jacobs
//CSCE 3600.001
//DESCRIPTION: This program will prompt the user for a choice of operations to be done to 
//a user inputed 32 bit integer value. These operations include (1) Count Leading Zeroes, 
//(2) Endian Swap, (3) Rotate-right, and (4) Parity. 

int main(){
	int choice=-1; //resets choice variable each run
	do{
	printf("Enter the menu option for the operation to perform:\n"); //prints out the menu
	printf("(1) Count Leading Zeroes\n");
	printf("(2) Endian Swap\n");
	printf("(3) Rotate-right\n");
	printf("(4) Parity\n");
	printf("(5) EXIT\n");
	printf("-->"); //menu done printing
	scanf("%d", &choice); //reads in user choice
	unsigned long long int ent=0; //integer to be checked if in 32 bit range
	unsigned long int pass=0; //32 bit integer to be used
	int rotam=0; //rotate ammount
	
	switch (choice) //switch statement to operate menu
        {
                
            case 1:  //if the user enters 1
			do{
			printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): "); //prompts for input
			scanf("%lld", &ent); //reads in user input int
			}while(ent>4294967295 || ent<1); //if not in acceptable range, repeat
			pass = ent; //once in acceptable range, make it 32 bits and pass
			clz(pass); //call the function
			break;
			
            case 2: //if the user enters 2
			do{
			printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");//prompts for input
			scanf("%lld", &ent);//reads in user input int
			}while(ent>4294967295 || ent<1);//if not in acceptable range, repeat
			pass = ent; //once in acceptable range, make it 32 bits and pass
			endian(pass); //call the function
			break;
			
            case 3: //if the user enters 3
			do{
			printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");//prompts for input
			scanf("%lld", &ent);//reads in user input int
			}while(ent>4294967295 || ent<1);//if not in acceptable range, repeat
			pass = ent; //once in acceptable range, make it 32 bits and pass
			do{
			printf("Enter the number of position to rotate-right the input (between 0 and 31, inclusively)://prompts for input ");
			scanf("%d", &rotam);//reads in user input int
			}while(rotam>31 || rotam<0);//if not in acceptable range, repeat
			rotate(pass,rotam); //call the function
			break;
            
			case 4://if the user enters 4
			do{
			printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");//prompts for input
			scanf("%lld", &ent);//reads in user input int
			}while(ent>4294967295 || ent<1);//if not in acceptable range, repeat
			pass = ent; //once in acceptable range, make it 32 bits and pass
			parity(pass); //call the function
			break;
			
			case 5: //if the user enters 5
			printf("Program terminating. Goodbye...\n");
			exit(0); //close the program
			break;
			
			default: //if the user enters anything else
			printf("Error: Invalid option. Please try again.\n");
			break;
		}
	}while(choice != 5); //repeats each time until exit is called
	return 0;
	
}