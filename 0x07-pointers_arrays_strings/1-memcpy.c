#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: copy to destinated memory area
 * @src: copy from source memory area
 * @n: bytess from memory to be copied
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
