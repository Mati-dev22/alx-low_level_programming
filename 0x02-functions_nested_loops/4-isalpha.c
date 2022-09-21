#include "main.h"
/**
 *  _isalpha - check for alphabetic character
 *  @c: the character check
 *
 *  Return: if c is a letter, lowercase or uppercase
 *  otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	return (0);
}
