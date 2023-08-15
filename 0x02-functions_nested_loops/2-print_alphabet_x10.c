#include "main.h"
/**
 * print_alphabet_x10 - code to print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;
	/*loop through while first*/
	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		alpha = 'a';
		_putchar('\n');
	}
}
