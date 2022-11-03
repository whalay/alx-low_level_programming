#include "main.h"

/**
 * factorial -  A factorial oof nuumber
 *
 * @n: the number to compute itt factorial
 *
 * Return: returns 0 or tthe computed factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 1) || (n == 0))
	{
		return (1);
	}
	return (n * factorial(n));
}
