#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds given numbers
 * @argc: number of arguments
 * @argv: pointer to an array of pointers
 * Return: 0 sucess
 */

int main(int argc, char **argv)
{
	int i, digit, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
