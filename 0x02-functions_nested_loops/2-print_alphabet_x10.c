#include "main.h"
/**
 * print_alphabet_x10.c - print lowercase alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}
