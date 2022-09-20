#include <stdio.h>
/**
 * main - print number as 00 01
 *
 * Description: using the main function
 * this o=program prints "programming for numbers as 00 01"
 * Return: 0
 */
int main(void)
{
	int i1 = 0;
	int i2;

	while (i1 != 99)
	{
		i2 = i1;
		while (i2 <= 99)
		{
			if (i2 != i1)
			{
				putchar((i1 / 10) + 48);
				putchar((i1 % 10) + 48);
				putchar(' ');

				putchar((i2 / 10) + 48);
				putchar((i2 % 10) + 48);
				if (i1 != 98 || i2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++i2;

		}
		++i1;
	}
	putchar('\n');
	return (0);
}
