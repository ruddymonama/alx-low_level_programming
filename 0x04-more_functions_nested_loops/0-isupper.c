#include "main.h"
/* function to check whether character is a capital letter
 * returns 1 if char is capital letter
 * returns o if otherwise
 */

int isupper(char c){
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
