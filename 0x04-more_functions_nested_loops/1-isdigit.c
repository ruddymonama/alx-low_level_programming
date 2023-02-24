#include "main.h"

/* Program to check for digit
 * Returns 1 if is digit
 * Returns 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
