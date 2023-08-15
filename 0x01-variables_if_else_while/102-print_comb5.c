#include <stdio.h>
/**
 * main - code to print all possible combos of two 2-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a,b;
	/*enter conditionals*/
	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) +48);
				if (a != 98 || b != 99)
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
