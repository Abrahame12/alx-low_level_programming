#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Return: 1(Success), otherwise 0
 * @c: char is to checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
