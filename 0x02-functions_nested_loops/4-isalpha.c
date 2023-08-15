#include "main.h"
/**
 * _isalpha - determines if character is an alphabet
 * @c: character to be passed the alphabet checker
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
