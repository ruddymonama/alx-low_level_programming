#include "main.h"

/* Program to print numbers from 0 to 9 follwed by new line. */

void print_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		_putchar('0' +i);
		i++
	}
	_putchar('\n');
}
