#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the final destination
 * @src: initial source
 * @n: amount of bytes used
 * Return: return pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, i2 = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (i2 < n)
	{
		*(dest + i) = *(src + i2);
		if (*(src + i2) == '\0')
			break;
		i++;
		i2++;
	}
	return (dest);
}
