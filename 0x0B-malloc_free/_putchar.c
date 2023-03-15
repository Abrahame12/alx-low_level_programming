#include <unistd>
/**
 * _putchar - writes character c to stdout
 * @c: prints characters
 *
 * Return: 1(Success)
 * On error, -1 is returned and the error is set appropriately
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
