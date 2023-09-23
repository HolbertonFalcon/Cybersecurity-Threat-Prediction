#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: Prints the lowercase alphabet followed by a newline character.
 *
 * Return: Always void (no return value).
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
}
