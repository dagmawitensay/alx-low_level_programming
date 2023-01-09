#include "main.h"
#include <stdio.h>

/**
 * main - functions that prints the given arguments
 * @argc: number of arguments
 * @argv: pointer to an array of pointers
 * Return: 0 sucess
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
