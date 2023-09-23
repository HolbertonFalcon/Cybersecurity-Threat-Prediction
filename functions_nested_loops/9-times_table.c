#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int h;
	int v;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (v == 0)
			{
				_putchar('0' + h * v);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (h * v <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (h * v) / 10);
				}
				_putchar('0' + (h * v) % 10);
			}
		}
		_putchar('\n');
	}
}
