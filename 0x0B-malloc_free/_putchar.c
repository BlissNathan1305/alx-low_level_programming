#include <unistd>

/**
 * _putchar - writes the character @c to stdout
 * @c:The character to print
 *
 * Return: a positive number on success and -1 on faikure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
