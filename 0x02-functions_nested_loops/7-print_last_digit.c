#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: value of last digit of a number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar(n + '0');
	return (n);
}
