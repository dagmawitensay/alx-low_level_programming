#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies given two numbers
 * @argc: number of argumets
 * @argv: pointer to an array of pointers
 * Return: 0 sucess
 */

int main(int argc, char **argv)
{
	int result, a, b;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
