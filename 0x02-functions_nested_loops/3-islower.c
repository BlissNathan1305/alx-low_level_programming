#include"main.h"

/**
* _islower - Entry point
* Description: checks for lower case
* @c:integer value it receives
* Return: 1 if true, 0 if false
*/

int_islower(int c)
{
int i = 'a';


for (i = 'a'; i <= 'z'; i++)
{
/* refer int c */
if (c == 1)
{
return (1);
}
}
return (0);
}

