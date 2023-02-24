#include "main.h"

/* Program to check for digit
 * Returns 1 if is digit
 * Returns 0 if otherwise
 */

int isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
