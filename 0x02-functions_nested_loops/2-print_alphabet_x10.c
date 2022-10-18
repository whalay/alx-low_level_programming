#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(i);
		}
	}

		_putchar('\n');

}

