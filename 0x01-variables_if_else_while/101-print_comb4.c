#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int c;
	int d;
	int k;

	for (c = '0'; c <= '7'; c++)
	{
		for (d = c + 1; d <= '8'; d++)
			for (k = c + 2; k <= '9'; k++)
				if (c != d && k != c && k != d)
				{
				putchar(c);
				putchar(d);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		if (c == '7' && d == '8' && k == '9')
			break;

	}
	putchar('\n');
	return (0);
}
