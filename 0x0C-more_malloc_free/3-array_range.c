#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 *
 * @min: smallest number to be stored
 *
 * @max: largest number to be stored
 *
 * Return: returns pointer to the newly created array, else NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int len, num, index;

	if (min > max)
		return (0);
	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(arr + index) = num;
	return (arr);
}
