#include "main.h"

/**
 * _pow_recursion - find the resullt of x power y
 * @x: the number
 * @y: the power
 * Return: return thr result of x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
