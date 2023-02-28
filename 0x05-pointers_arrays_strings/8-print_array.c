#include "main.h"
#include <stdio.h>

/**
 *print_array - print number of elements in an array of integers, followed
 *by a new line
 *
 *@a: the array to work with
 *@n: number of elements in the array
 *
 *Return: always 0
 */

void print_array(int *a, int n)
{
	int i, c = n - 1;

	for (i = 0; i <= c; i++)
	{
		if (i == c)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
