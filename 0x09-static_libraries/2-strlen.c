#include "main.h"

/**
 * _strlen - return the lemgth of a given string
 *
 * @s:pointer to string to work on
 * Return:string
 */

int _strlen(char *s)
{
	int len = 0;


		while (*(s + len) != '\0')
		len++;
	return (len);
}
