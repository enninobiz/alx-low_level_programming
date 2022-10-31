#include "main.h"

/**
 * _strspn - get the length of prefix substring
 * @s:the string we look at
 * @accept: the string we compare to
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
		break;
	}
	return (i);
}
