//Walter Jacobs

#include"major1.h"
#include<stdio.h>
#define TOTAL_BITS 32

unsigned int rotate(unsigned int num, unsigned int k)
{
	unsigned int res;
	k = k % TOTAL_BITS;
	res = (num << k)|(num >> (TOTAL_BITS-k));
	printf("%u rotated by %u position gives: %u\n",num,k,res);
	return res;

}
