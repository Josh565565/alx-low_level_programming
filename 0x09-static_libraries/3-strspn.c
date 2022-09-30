#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to work on
 *
 * @accept: pattern to match against
 *
 * Return: returns unsigned int to how many initial bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, lent = 0, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lent++;
				break;
			}
		}
		if (lent != 0)
			match++;
		if (match != lent)
			return (lent);
	}
	return (0);
}
