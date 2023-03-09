#include <unistd.h>
/**
 * _putchar - writes cahracter c to stdout
 * @c: prints the characters
 *
 * Return: 1(Success)
 * On error, -1 is returned and error is set appropriately
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
