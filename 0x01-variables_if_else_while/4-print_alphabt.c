#include <stdio.h>
/**
 * main - prints lowercase letters except q and e
 *
 * Description: using the main function
 * this program prints "Programming to print lowercase letters except q and e"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
