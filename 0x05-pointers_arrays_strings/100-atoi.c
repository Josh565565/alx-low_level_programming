#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int i;
	int ok = 0;
	int j;
	int k = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && j > 0)
			break;
		if (s[i] == '-')
			ok--;
		if (s[i] == '+')
			ok++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			j++;
		}
	}
	while (j > 0)
	{
		num += ((s[i - 1] - '0') * k);
		i--;
		j--;
		k *= 10;
	}
	if (ok >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
