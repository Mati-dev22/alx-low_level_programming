#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers which are different
 *
 * Description: using the main
 * this program prints "numbers which are different"
 * Return: 0
 */
int main(void)
{
	int i1 = 0;
	while (i1 <= 9)

	{
		int i2 = 0;

		while (i2 <= 9)
		{
			if (i1 != i2 && i1 < i2)
			{
				putchar(i1 + 48);
				putchar(i2 + 48);

				if(i1 + i2 != 17)
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
	return 0;
}
