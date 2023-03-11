#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copy string from src into dest and return it
 *
 *@dest: destination of the string
 *@src: source of the string
 *
 *Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *str;

	str = strcpy(dest, src);

	return (str);
}
