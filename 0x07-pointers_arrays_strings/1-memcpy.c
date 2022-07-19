#include "main.h"

/**
 * _memcpy - function to copy a area of memory
 * @dest: input pointer to string address
 * @src: input pointer to the source
 * @n: number of bytes
 * Return: return to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + x);
		x++;
	}
	return (dest);
}
