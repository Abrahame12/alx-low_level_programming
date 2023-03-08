#include "main.h"
/**
 * char *_memset - fills memory with a constant byte
 * @s: ref parameter to store the address
 * @b: value parameter, number of bytes
 * @n: value, parameter, size of the buffer
 *
 * Return: return the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
	{
		s[i] = b;
	}
	return (s);
}
