#include "main.h"
/**
 * print_most_numbers - prints nums from 0 to 9, no 2 or 4
 * Return: NULL
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
