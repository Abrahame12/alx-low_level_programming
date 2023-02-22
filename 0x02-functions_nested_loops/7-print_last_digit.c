#include "main.h"
/**
 * print_last_digit - print the last digit of value
 * @n: the int to extract the last digit for a value
 * Return: last digit's value
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
