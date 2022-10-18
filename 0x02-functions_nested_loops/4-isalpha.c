#include "main.h"

/**
 * isalpha - check if  it is number
 *
 *@c: Ascii character
 *
 * Return: 1 if it is a number
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

