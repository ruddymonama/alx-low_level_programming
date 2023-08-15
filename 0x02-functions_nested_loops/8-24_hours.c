#include "main.h"
/**
 * jack_bauer - prints Jack's time
 *
 * Return: NULL
 */
void jack_bauber(void)
{
	int hr;

	for (hr = 0; hr <= 24; hr++)
	{
		int min;
		
		while (min <= 59)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
	}
}
