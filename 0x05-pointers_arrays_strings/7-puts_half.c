#include "main.h"
#include <string.h>

/**
 *puts_half - print half of a string, followed by a new line
 *
 *@str: holds the string
 *
 *return: always 0
 */

void puts_half(char *str)
{
	int len, c;

	len = strlen(str);

	if (len % 2 != 0)
	{
		for (c = ((len - 1) / 2) + 1; c < len; c++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		for (c = len / 2; c < len; c++)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
