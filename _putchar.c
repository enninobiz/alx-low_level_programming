#include <unistd.h>
#include "main.h"

/**
 * _putchar - write characters in c to stdout
 * @c: the characters to print
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
