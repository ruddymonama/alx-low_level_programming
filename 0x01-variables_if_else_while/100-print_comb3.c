#include <stdio.h>
/**
 * main - code to print all possible diff combs of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	/*using 0-9*/
	for (i = 48; i <= 57; i++) /*print 0 to 9*/
	{
		for (j = 49; j <= 57; j++) /* print 1 to 9*/
		{
			if (j > i) /* when above 10, start double digiting*/
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57) /* when doubles rise,skip em*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
