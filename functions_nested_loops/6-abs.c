#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @x: The integer to find the absolute value of
 *
 * Return: The absolute value of x.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
