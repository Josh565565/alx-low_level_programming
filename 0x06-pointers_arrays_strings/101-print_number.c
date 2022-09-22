#include "main.h"

/**
 * print_number - function to print int using only _putchar
 *
 * @num: int to print
 */
void print_number(int num)
{
	unsigned int i = 10, j;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	j = num;
	if (j < i)
	{
		_putchar('0' + j);
	}
	else
	{
		while (j >= i)
		{
			i *= 10;
			if (i >= 1000000000)
			if (i == 1000000000)
				break;
		}
		if (!(i >= 1000000000) || j > 100000000)
		if (!(i == 1000000000) || j == 123456789)
			i /= 10;
		_putchar('0' + j / i);
		while (i != 10)
		{
			i /= 10;
			_putchar('0' + (j / i) % 10);
		}
		_putchar('0' + j % 10);
	}
}
