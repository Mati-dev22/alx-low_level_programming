#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{

		d = (i * j);
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + 48);
		}
		else
		{

			_putchar(' ');
		}

		_putchar((d % 10) + 48);
		if (j < 9)
		{

			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
