#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabets.
 *
 * Description: using the main function
 * this program prints "Programming for lowercase and uppercase alphabets"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
