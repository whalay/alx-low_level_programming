#include <stdio.h>
/**
 * main - Entry - point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			putchar(i + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');

return (0);
}

