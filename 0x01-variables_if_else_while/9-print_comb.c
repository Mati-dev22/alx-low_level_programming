#include <stdio.h>
/**
 * main - prints numbers 1 to 9 with comma and space
 *
 * Description: using the main function
 *this program prints "programming for printing numbers 1-9 with comma and space"
 *Return: 0
 */
int main(void)
{
  int i;

  for (i = '0'; i <= '9'; i++)
    putchar(i);
  if (i != '9')
    putchar(',');
  putchar(' ');

  putchar('\n');
  return (0);
}
