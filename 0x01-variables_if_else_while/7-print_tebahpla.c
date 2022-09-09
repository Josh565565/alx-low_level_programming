#include <stdio.h>

/**
 * main - enrty point
 *
 *Return: always returns 0
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
