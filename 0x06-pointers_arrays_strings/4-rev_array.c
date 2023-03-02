#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses output of the array
 * @a: an array of integer
 * @n: the number element to swap
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
