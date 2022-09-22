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
char *_strcat(char *dest, char *src);
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;
	
	while (src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		do {
			*dest_end++ = *src++;
												} while (src_len--);
	}

	return (dest);
}
