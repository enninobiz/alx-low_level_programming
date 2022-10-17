#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char lcr;

	for (lcr = 'z'; lcr >= 'a'; lcr--)
		putchar(lcr);

	putchar('\n');

	return (0);
}
