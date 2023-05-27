#include "main.h"

/**
  * flip_bits - count bits you need to flip to get from one number to another
  * @n: first number
  * @m: second number
  * Return: number of flips to get from one number to the other
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flip_count = 0;

	/* Count the number of set bits in the XOR result */
	while (xor_result)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (flip_count);
}
