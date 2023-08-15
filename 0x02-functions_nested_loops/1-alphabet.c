#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	/*loop throough while*/
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
