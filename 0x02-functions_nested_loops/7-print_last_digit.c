#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit on integer
 * @n: integer to pass through
 *
 * Return: @n last digit value
 */
int print_last_digit(int n)
{
	int d = abs(n % 10);

	_putchar(d + '0');
	return (d);
}
