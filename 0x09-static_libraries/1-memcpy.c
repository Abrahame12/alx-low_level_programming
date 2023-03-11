#include "main.h"
/**
 * _memcpy - writes copied memory area
 * @src: source of the memory
 * @dest: destination of the memory
 * @n: number of bytes
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
