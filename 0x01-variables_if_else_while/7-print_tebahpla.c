#include <stdio.h>
/**
 * main - prints alphabets in reverse
 *
 * Description: using the main function
 * this program prints "programming for alphabets in reverse"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
