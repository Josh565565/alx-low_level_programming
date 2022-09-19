#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: always returns 0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 1122)
	{
		c = rand() % 123;
		sum += c;
		putchar(c);
	}
	putchar(4567 - sum);

	return (0);
}
