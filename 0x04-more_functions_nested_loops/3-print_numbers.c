#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: NULL
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
