#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Description: This function appends the src string to the
 * string pointed to by dest, overwriting the null byte at the end of dest.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;
	
	while (dest[dlen])
	{
		dlen++;
	}
	
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	
	dest[dlen] = '\0';
	return (dest);
}
