#include "main.h"

/**
 * _strcpy - sopies string including ending null byte (\0)
 * @dest: pointer
 * @src: pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
