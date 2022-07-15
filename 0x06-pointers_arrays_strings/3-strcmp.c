#include "main.h"

/**
 * *_strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 * Return: return 0 if s1 and s2 are the same
 * another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, i2 = 0;

	while (i2 == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		i2 = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (i2);
}
