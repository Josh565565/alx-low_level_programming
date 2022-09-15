#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 */
void print_number(int n)
{
	int i;
	int j = 1;
	unsigned int x = n;
	unsigned int y = n;
	int a = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		y = n;
		x = n;
		x += 1;
		y += 1;
	}

	while (x != 0)
	{
		x = x / 10;
		a++;
	}
	for (i = 1; i < a; i++)
	{
		j *= 10;
	}
	for (i = 0; i < a; i++)
	{
		_putchar(y / j + '0');
		y = y % j;
		j = j / 10;
	}
}
