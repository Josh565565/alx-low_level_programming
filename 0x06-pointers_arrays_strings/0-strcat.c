#include "main.h"

/**
 * _strcat - function to concat two strings
 *
 * @dest: destination of concat
 *
 * @src: source of concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0
	int j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
