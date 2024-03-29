# include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: prints characters
 *
 * Return: 1(Success)
 * On error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
