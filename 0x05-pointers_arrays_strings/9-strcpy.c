/**
 * *_strcpy - this copies string to a given memory location
 *
 * @dest: string destination
 *
 * @src: string location
 *
 * Return: returns char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
}
