#include "main.h"

/**
 * _strncat - function to concatenate two strings and return
 * a new string with n element of the appended string
 *
 * @dest:string1
 * @src:string2
 * @n:number of char to include from appended string
 * Return:char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, int j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + j) == '\0' || j == n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;

	return (p);
}
