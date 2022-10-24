#include "main.h"
#include <unistd.h>

/**
 * _puts - print a striing follw by new line
 *
 * @str: an inputted string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
