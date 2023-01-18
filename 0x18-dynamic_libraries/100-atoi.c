#include "main.h"
#include <stdio.h>

/**
 * _atoi - give the length of a string
 *
 * @s: an inputted string
 *
 * Return: sucees 0
 */

int _atoi(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
