#include <unistd>

/**
 * _putchar - writes the character @c to stdout
 * @c:the character to print
 *
 * Return:a positive number on success and -1 on failure
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
