#include "main.h"

/**
 * _memset - fills the first n bytes pointed to @s with the consent of byte @c
 * @s: A pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: the number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
