#include "main.h"

/**
 * _atoi - converts the first set of digits in a string to an integer,
 *
 * @s: string to be converted
 *
 * Return: returns int with converted numbers
 */
int _atoi(char *s)
{
	int n, indx;
	unsigned int res;
	int i = 1;
	char new;

	n = 0;
	res = 0;
	while (*(s + n) != '\0')
	{
		new = *(s + n);
		if (new == '-')
		{
			i *= -1;
		}
		if (new >= '0' && new <= '9')
		{
			indx = n;
			while (*(s + indx) > 47 && *(s + indx) < 58)
			{
				res = (res * 10) + *(s + indx) - '0';
				indx++;
			}
			break;
		}
		n++;
	}
	if (i < 0)
		res *= i;
	return (res);

}
