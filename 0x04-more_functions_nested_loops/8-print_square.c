#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: size of square
 * Return: NULL
 */
void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
