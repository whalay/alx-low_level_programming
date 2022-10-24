#include "main.h"
#include <stdio.h>

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
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
