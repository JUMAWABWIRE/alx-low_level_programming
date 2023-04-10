#include <unistd.h>

/**
 * _putchar - will jote the character c to stdout
 * @c: A character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
