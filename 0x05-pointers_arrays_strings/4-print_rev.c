#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev - function that prints a string, followed by a new line, to stdout.
 *@str: pointer Dereferencing at string.
 *Return : @str
 */
void print_rev(char *str)
{
	int a = 0;
	/* int a = strlen(str); */
	for (a = strlen(str) - 1; a >= 0; a--)
	/* while (a != 0) */
	{
		/* printf("a = %p\n", str++); */
		/* printf("a = %d\n", a); */
		_putchar(str[a]);
	}
	_putchar('\n');
}
