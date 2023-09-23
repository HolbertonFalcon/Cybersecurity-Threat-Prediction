#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet 10 times,
 * each time followed by a newline character.
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int x;
	int y = 1;

	while (y <= 10)
	{
		for (x = 0; x < 26; x++)
		{
			_putchar(c[x]);
		}
		_putchar('\n');
		y++;
	}
}
