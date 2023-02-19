#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c < '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
			if (c != d)
			{
				putchar(c);
				putchar(d);
				putchar(',');
				putchar(' ');
			}
		if (c == '8' && d == '9')
			break;

	}
	putchar('\n');
	return (0);
}
