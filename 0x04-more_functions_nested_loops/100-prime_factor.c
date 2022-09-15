#include <stdio.h>
/**
 * main - main function
 *
 * Return: always returns 0
 */
int main(void)
{
	unsigned int i = 2;
	unsigned long n = 612852475143;

	while (i != n)
	{
		if (n % i == 0)
		{
			n = n / i;
		} else
		{
			i++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
