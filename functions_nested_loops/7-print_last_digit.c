#include <main.h>

/**
 * print_last_digit - Prints the last digit of an integer
 * @x: The integer whose last digit needs to be printed
 *
 * Return: The last digit of the integer 'x'.
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x >= 0)
	{
		last_digit = x % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		if (x == INT_MIN)
		{
			last_digit = 8; // Last digit of INT_MIN is 8
		}
		else
		{
			last_digit = -x % 10;
		}

		_putchar('0' + last_digit);
		return (last_digit);
	}
}
In the updated code, we explicitly handle the case when x is INT_MIN and set the last_digit accordingly. The last digit of INT_MIN is 8, so we set last_digit to 8 in this case.

Now, calling print_last_digit(INT_MIN) should correctly print the last digit, which is 8, and return 8.





