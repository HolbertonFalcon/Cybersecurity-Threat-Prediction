#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @x: The integer from which to extract the last digit
 *
 * Return: The last digit of the integer 'x'.
 */
int print_last_digit(int x)
{
	int x;

	if (x >= 0)
	{
		x = (x % 10);
		_putchar('0' + x);
		return (x);
	}
	else if (x < 0)
	{
		x = (x % 10);
		x = -x;
		_putchar('0' + x);
		return (x);
	}
	else
	{
		return (9);
	}
}
