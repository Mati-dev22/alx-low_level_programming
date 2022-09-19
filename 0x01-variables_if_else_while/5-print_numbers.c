#include <stdio.h>
/**
 * main - prints numbers from 0 to 9
 *
 * Description: using the main function
 * this program prints "programming to print numbers"
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);

	putchar('\n');

	return (0);
}
