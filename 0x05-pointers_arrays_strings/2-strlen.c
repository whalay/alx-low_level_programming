#iinclude "main.h"
#include <stdio.h>

/**
 * _strlen - give the length of a string
 *
 * @s: an inputted string
 *
 * Return: sucees 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
