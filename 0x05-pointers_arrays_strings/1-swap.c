#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0(Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
