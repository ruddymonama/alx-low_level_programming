#include "main.h"
/**
 * print_sign - determines sign of number
 * @n: integer to pass through sign checker
 *
 * Return: Returns 1 and prints + if n is greater than zero
 *	Returns 0 and prints 0 if n is zero
 *	Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
