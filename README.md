Group 10: Andrew Herubin, Cody Hogan, Aracely Heredia, Walter Jacobs

**How to run this program:**
1. cd Into the folder and perform a git pull
2. Compile through the makefile with the "make" command
3. Run the program either by "make run" or "./bitwisemenu"
4. Operate the menu as per the instructions on screen
5. To remove *.o files, use the "make clean" command

FEATURES:

    major1.c - This program will prompt the user for a choice of operations to be done to a user inputed 32 bit integer value. These operations include (1) Count Leading Zeroes, (2) Endian Swap, (3) Rotate-right, and (4) Parity.  The main menu functionality was programmed by Cody Hogan.

    major1.h - This file contains all the function prototypes for this project, as well as all include statements for each function. This file was created by Cody Hogan and edited by all members to include their respective function calls.

    makefile - The makefile allows for the simple compilation of all files required to run this program. This file was written by Cody Hogan.

    parity.c (Andrew) - this function takes in an unsigned long int, it then determines if the number has even or odd parity, then returns a 1 if the parity was odd and a 0 if the parity is even, the function will also print this value.

    clz.c (Cody Hogan) - This program will print out the number of leading zeroes in a 32 bit binary integer the is input by the user. This program was written by Cody Hogan.
    
    rotate.c (Walter Jacobs) - This code uses the rotation operation by taking two integer operands by the fucntion its passed to.

    endian.c (Aracely Heredia) – This function will perform an endian swap by swapping the least significant byte with the most significant byte. 

KNOWN BUGS:
    none as of (3/4/2022)
