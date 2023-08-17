#include "main.h"
/**
 * main - test positive_or_negative function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	a = 20;
	b = 0;
	c = -20;
	/* test positive*/
	positive_or_negative(a);
	/*test zero*/
	positive_or_negative(b);
	/* test negative*/
	positive_or_negative(c);

	return (0);
}
