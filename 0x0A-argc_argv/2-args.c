#include <stdio.h>

/**
 * main - fuction that prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: returns int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
