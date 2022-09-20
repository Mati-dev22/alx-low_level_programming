#include <stdio.h>
/**
 * main - prints numbers 1 to 9 with comma and space
 *
 * Description: using the main function
 * this program prints "programming for numbers 1-9 with comma and space"
 * Return: 0
 */
int main(void)
{
	int i=0;

	while (i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
		        putchar(' ');
	}
		++i
	}

		putchar('\n');
		return (0);
}
