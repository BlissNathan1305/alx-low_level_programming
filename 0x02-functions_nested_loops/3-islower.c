#include"main.h"

/**
* _islower - Entry point
* Description: checks for lower case
* @c:integer value it receives
* Return: 1 if true, 0 if false
*/

int_islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

