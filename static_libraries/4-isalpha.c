#include "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if c is alphabetic (a letter), 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
