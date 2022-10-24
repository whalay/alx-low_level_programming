#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two variable
 *
 * @a: the first value
 * @b: second value
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
