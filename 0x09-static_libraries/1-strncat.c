#include "main.h"
#include <string.h>
/**
 * _strncat - concate the string
 * @src: source of the string
 * @dest: the destination of the string
 * @n: the number of char tha will be taken from the source
 *
 * Return: return the of the concatenate
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
