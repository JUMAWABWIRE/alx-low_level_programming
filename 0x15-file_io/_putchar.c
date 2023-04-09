#include <unistd.h>

/**
 * _putchar - Gives the character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is returned and the error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
