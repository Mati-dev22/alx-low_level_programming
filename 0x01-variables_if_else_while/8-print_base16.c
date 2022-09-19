#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 *
 * Description: using the main function
 * this program prints "programming for hexadecimal numbers"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
