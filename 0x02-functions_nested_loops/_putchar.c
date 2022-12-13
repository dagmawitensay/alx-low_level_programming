#include <unistd.h>



void _putchar(char c)
{
	write(1,c,1);
}

int main(void)
{
	_putchar(23 / 10 + '0');
}
