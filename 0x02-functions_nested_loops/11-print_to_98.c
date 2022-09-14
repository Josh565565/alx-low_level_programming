#include "main.h"
#include <stdio.h>
#include "6-abs.c"
/**
 * print_to_98 - prints to 98
 * @n: parameter
 *
 * Return: always returns nothing
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98;  i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
