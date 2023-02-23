#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0(Success)
 */
int main(void)
{
	unsigned long fb1, fb2, fbsum;
	float total_sum;

	while (1)
	{
		fbsum = fb1 + fb2;
		if (fbsum > 4000000)
			break;
		if ((fbsum % 2) == 0)
			total_sum += fbsum;
		fb1 = fb2;
		fb2 = fbsum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
