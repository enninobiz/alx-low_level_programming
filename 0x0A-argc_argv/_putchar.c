#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @C: the character to print
 * Return: On success 1, if not -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
