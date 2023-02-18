#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/** main - A fuction which be used to execute the code
 * Return: 0 if Success
 * */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
					{
						printf("is positive")
					}
					  else if (n == 0)  
					 {
						 printf("is zero")
					  }
					else
						("is negative")
						
					return (0);

}		
