#include "main.h"
/**
 * times_table - prints the imestable from 0 up to 9
 *
 * Return: NULL
 */
void times_table(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		int u = 0;

		while (u < 9)
		{
			int v = t * u;

			if (v > 9)
			{
				_putchar(v / 10 + '0');
				_putchar(v % 10 + '0');
			}
			else if (u != 0)
			{
				_putchar(' ');
				_putchar(v + '0');
			}
			else
			{
				_putchar(v + '0');
			}
			if (u != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			u++;
		}
		_putchar('\n');
	}
}
