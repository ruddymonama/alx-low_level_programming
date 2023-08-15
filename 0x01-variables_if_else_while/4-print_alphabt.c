#include <stdio.h>
/**
 * main - code to the alphabet without 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; /*using the ASCII values of the alphabet*/

	for (i = 97; i < 123; i++)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
