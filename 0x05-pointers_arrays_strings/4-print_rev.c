#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 * @s: holds the string
 *
 * Return: 0(Success)
 */
void print_rev(char *s)
{
	char len, c;

	len = strlen(s);

	for (c = len - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}
