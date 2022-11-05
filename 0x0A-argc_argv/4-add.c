#include <stdio.h>
#include <stdlib.h>
/**
 * main - add the args
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
/* atoi convert a string to an int */
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
