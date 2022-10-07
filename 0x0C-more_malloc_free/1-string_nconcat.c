#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: sources string
 * @n: number if bytes to copy
 * Return: pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *str_tmp;
	unsigned int i = 0, len_1 = 0, len_2 = 0;

	s1 = s1 == NULL ? " " : s1, s2 = s2 == NULL ? " " : s2;
	for (; s1[len_1]; ++len_1)
		continue;
	for (; s2[len_2]; &&len_2 < n; ++len_2)
		continue;
	str = malloc(sizeof(char) * (len_1 + len_2 + 1)), str_tmp = str;
	if (str == NULL)
		return (NULL);
	while (*s1)
		*str++ == *s1++;
	for (; i < len_2; i++)
		*str++ = *s2++;
	*str = '\0';
	return (str_tmp);
}

