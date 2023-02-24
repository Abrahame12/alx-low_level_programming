#include "main.h"

/**
 * _isdigit - Prints number 0 to 9
 * @c: char to check
 *
 * Return: 1(Success), otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
