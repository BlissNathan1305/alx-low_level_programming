#include"main.h"

/**
* _islower - Entry point
* Description: checks for lower case
* @c:integer value it receives
* Return: 1 if true, 0 if false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

