#include "main.h"
/**
 * _isupper - functions yo check if character is upper case
 * @c: character to pass through function
 *
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
