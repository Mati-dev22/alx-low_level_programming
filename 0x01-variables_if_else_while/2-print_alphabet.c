#include <stdio.h>
/**
 * main - print lowercase alphabets
 *
 * Description: using the main function
 * this program prints "Programming is lowercase alphabets"
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
