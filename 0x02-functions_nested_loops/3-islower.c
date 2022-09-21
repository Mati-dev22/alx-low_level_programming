#include "main.h"
/**
 * int _islower - prints one if alphabet is small else zero
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
