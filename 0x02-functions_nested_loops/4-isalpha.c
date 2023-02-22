#include "main.h"
/**
 * _isalpha -  checks for both lower and upper case letters
 * @c: the charcter to be checked
 * Return: 1(Success), otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
