#include <math.h>
#include "main.h"

/**
 * flip_bits - counts the number of bit you
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
