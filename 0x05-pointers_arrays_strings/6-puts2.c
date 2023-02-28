#include "main.h"
#include <string.h>


/**
 *puts2 - print every other character in a string, followed by a new line
 *
 *@str: holds the string
 *
 *Return: Always 0;
 *
 */

void puts2(char *str)
{
	int len, c;

	len = strlen(str);

	for (c = 0; c <= len - 1; c = c + 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

