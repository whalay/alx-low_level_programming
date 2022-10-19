#include "main.h"
/**
 * print_last_digit - check fr last number
 * @n: print 0 or -1
 I*
 * Return: success aways
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}

}
