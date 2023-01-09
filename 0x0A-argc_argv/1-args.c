#include "main.h"
#include <stdio.h>


/**
 * main - function that prints the number of arguments passed
 * @argc: number of arguments
 * @argv: pointer to array of pointers
 * Return: 0 sucess
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
