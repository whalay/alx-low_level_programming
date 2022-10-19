#include "main.h"
/**
 * print_sign - Print a number iif it i
 * negative or positive
 *
 * @n: return 1 or 0
 * Return: returns 0 or 1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	_putchar('\n');

}

