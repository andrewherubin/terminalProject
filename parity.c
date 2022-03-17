#include "major1.h"

/*
** Andrew Herubin, ADH0376
** CSCE 3600.001 (1268)
*/

/*
**	parity takes in an unsigned long int as p
**	p converts to binary and determines the parity
**	returns 0 if even parity
**	returns 1 if odd parity
**  will also print parity value
*/
int parity(unsigned long int p)
{
	/* store value of p */
	unsigned long int num = p;
	/* base case if number is 1 (does not behave properly in the loop) */
	if (p==1)
	{
		return 1;
	}
	/* will determine number of ones in binary number */
	int ones = 0;
	/*
	** loops until p = 0
	** goes through process of converting decimal number to binary number
	** anytime a 1 would be marked, ones is incremented
	*/
	while (p!=0)
	{
		p=p/2;
		if ((p%2)!=0)
		{
			++ones;
		}
	}
	/* determines if parity is odd or even using the number of ones found in the loop */
	if ((ones%2)==0)
	{
		printf("Parity of %ld is 0.\n", num);
		return 0;
	}
	printf("Parity of %ld is 1.\n", num);
	return 1;
}
