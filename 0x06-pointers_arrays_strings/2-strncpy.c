#include "main.h"
#include <string.h>
/**
 * _strncpy - copy string
 * @src: source of the string
 * @dest: the destinaion of the string
 * @n: number the number of char will copied
 *
 * Return: return the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
