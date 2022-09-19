#include "main.h"

/**
 * rev_string - this prints given string in reverse
 *
 * @s: pointer argument for string
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int len = 0, i, length;
	char c;

	while (*(s + len) != '\0')
	{
		len++;
	}
	length = len;
	len--;
	for (i = 0; i < length / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = c;
		len--;
	}
}
