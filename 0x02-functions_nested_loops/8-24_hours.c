#include "main.h"

/**
 * jack_bauer - prints every minute starting
 * from 00:00 to 23:59
 * Return: void
 */



void jack_bauer(void)
{
	char hour = '0';

	while (hour < '24')
	{
		char minute = '0';

		while (minute < '60')
		{
			if (hour < 10)
			{
				if (minute < 10)
				{
					_putchar('0');
					_putchar(hour);
					_putchar(':');
					_putchar('0');
					_putchar(minute);
				} else
				{
					_putchar('0');
					_putchar(hour);
					_putchar(':');
					_putchar(minute);
				}
			} else
			{
				if (minute < 10)
				{
					_putchar(hour);
					_putchar(':');
					_putchar('0');
					_putchar(minute);
				} else
				{
					_putchar(hour);
					_putchar(':');
					_putchar(minute);
				}
			}
			minute++;
		}
		hour++;
	}
}
