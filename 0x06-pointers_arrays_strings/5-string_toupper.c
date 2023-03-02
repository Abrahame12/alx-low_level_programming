#include "main.h"
#include <string.h>
/**
 * string_toupper - converting lowercase to uppercase
 * @str: string to be converted
 *
 * Return: return the string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
