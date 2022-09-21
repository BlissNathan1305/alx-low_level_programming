#include "main.h"

/**
 * string_toupper - function to transform all lower case in string to upper
 *
 * @c:character string pointer 
 * Return:char pointer
 */

 char *string_toupper(char *)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}

