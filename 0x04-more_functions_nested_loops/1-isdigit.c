#include "main.h"

/**
 * _isdigit - to check if a character is a digit
 * @c: int to be checked
 * Return: 1 if c is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	int m = 0;

	if (c >= '0' && c <= '9')
		m = 1;

	return (m);
}
