#include  <stdio.h>

/**
 * main - prints the  total number of args
 *
 * @argc: arguement1
 * @argv: arguement2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
