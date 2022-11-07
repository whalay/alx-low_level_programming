#include "main.h"

/**
 * _islower - check if a numbet is lower or not
 *
 * @c: The character in ascii
 *
 * Return: 1 for lowercase , 0 for else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

