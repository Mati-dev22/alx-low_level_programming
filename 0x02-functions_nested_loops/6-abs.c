#include "main.h"
/**
 * _abs - prints absolute value of an integer
 * @i: value to test
 *
 * Return: absolute value of i
 */
int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
