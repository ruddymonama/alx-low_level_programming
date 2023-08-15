#include <stdio.h>
/**
 * main -m code to print numbers with non ID combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	/* using 3 vars, all through 0 to 9*/
	for (i = 48; i < 58; i++) /*first digit in combo 0-9*/
	{
		for (j = 49; j < 58; j ++) /*second digit in combo 1-9*/
		{
			for (k = 50; k < 58; k++) /*third digit in combo 2-9*/
			{
				if (k > j && j > i) /*when larger precedes smaller*/
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
