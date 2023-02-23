#include "main.h"
/**
 * print_times_table - prints the times table of given inputs
 *
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int v, b, k;

	if (n >= 0 && n <= 15)
	{
		for (v = 0; v <= n; v++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				k = v * b;
				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar((k / 10) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

