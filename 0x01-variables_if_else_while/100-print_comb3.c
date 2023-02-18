#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(Success)
 */
int main(void)
{
	int a;

	for (a = 01; a < 90; a++)
	{
		putchar(a + '0');
		if (a < 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
