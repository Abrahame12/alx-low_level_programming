#include <unistd.h>
/**
 * _putchar - writes a character c to stdout
 * @c: prints chracter c 
 *
 * Return: 1(Success)
 * On error -1 id returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
