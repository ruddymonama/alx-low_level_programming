#include <stdio.h>
/**
 * main - code to print the alphabet in small then big vcaps
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i=0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	for (i=0; i < 26; i++)
	{
		putchar(ALPHA[i]);
	}
	putchar('\n');
	return (0);
}
