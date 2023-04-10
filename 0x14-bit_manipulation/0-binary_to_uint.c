#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * unsigned int binary_to_uint - converts binary number to an unsigned int
 * @b: char to be converted into an integer
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_num = 0;

	if(!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
	     if (b[i]<'0' || b[i]>'1')
	     return (0);
decimal_num=2* decimal_num + (b[i]-'0');	     
	}
	return (decimal_num);
}
