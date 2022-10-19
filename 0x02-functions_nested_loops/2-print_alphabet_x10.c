#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	char al;

	for (n = 0; n <= 9; n++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
