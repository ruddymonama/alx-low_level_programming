#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: integer to print from
 *
 * Return: NULL
 */
void print_to_98(int n)
{
	/*set conditionals*/
	if (n > 98)
	{
		for (; n > 98; --n)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
