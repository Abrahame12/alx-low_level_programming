#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints characters
 * @c: Identfies the characters to print
 * Return: 1(Success)
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
