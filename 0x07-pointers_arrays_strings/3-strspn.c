#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: the bytes to get from
 *
 * Return: the number of bytes in the initial segment of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				len++;
				break;
			}

		if (accept[j] == '\0')
			break;
	}

	return (len);
}
