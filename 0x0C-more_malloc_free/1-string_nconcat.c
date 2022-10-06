#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fuction that allocates memory using malloc
 *
 * @b: size in bytes
 *
 * Return: returns void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
