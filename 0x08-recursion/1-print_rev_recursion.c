#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - main, print a text in reverrse
 *
 * @s: the text to bbe worked on
 *
 * Return: returns  nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}
