#include <stdio.h>
/**
 * main - Enry point
 *
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	unsigned long fb1 = 0, fb2 = 1, sum;

	for (n = 0; n <= 50; n++)
	{
		sum = fb1 + fb2;
		printf("%lu\n", sum);
		fb1 = fb2;
		fb2 = sum;
		if (n == 49)
		{
			printf("\n");
		}
		else
			printf(",");
	}
	return (0);
}
