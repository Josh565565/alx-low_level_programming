#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	unsigned char j = '0';
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar(j);
		j++;
	}
	j = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + j);
		j++;
	}
	putchar('\n');
	return (0);
}
