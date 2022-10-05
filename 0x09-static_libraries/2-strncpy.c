#include "main.h"

/**
 * _strncpy - function to copy
 * @dest:string to copy to
 * @src:string to copy from
 * @n:number of chars to copy
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}












