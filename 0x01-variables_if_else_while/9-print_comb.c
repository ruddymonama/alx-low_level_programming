#include <stdio.h>
/**
 * main - code to print combination of 0-9 and commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
