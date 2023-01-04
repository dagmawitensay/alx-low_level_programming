#include "main.h"

/**
 * _pow_recursion - function that returns x raised to y
 * @x: number to be raised
 * @y: number to raised to
 * Return:result of x raised to y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return x * _pow_recursion(x, y - 1);
}
