#include "main.h"
/**
 * _islower - prints one if alphabet is small else zero
 * @c: the character to check
 *
 * Return: 1 if c is lowercase
 * otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	return (0);
}
