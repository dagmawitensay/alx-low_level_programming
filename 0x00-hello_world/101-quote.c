#include <unistd.h>

/**
 * main - entry point of the program
 * Description: The program prints error
 * message to the console
 * Return:1 alwats returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -
			Dora Korpar, 2015-10-19\n",58);
	return (1);
}
