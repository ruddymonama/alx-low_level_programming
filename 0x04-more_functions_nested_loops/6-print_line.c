#include "main.h"
/**
 * print_line - print a staright line
 *
 * @n: number of times '_' should be printed
 * Return: NULL
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
