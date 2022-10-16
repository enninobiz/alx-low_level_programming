#include <stdio.h>

/**
 * main - program entry
 * Return: Always 0
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
