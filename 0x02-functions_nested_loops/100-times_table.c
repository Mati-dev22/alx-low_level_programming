#include "main.h"
/**
 * print_times_table - print time table for specied dimention
 * @n: dimention of time table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j ,k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{

		for (j = 0; j <= n; j++)
		{

			if (j == 0)
			{
				_putchar('0');
			}
			else
			{

				k = (i * j);
				_putchar((k < 100) ? ' ' : (k / 10 + 48));
				_putchar((k < 10) ? ' ' : (k / 10 + 48));
				_putchar((k % 10) + 48);
				}
				if (j != n)
				{

				_putchar(',');
				_putchar(' ');
				}
				}
				_putchar('\n');
				}
			}
