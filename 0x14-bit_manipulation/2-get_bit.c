#include "main.h"

/**
 * get_bit - Gives value of  bit for an index.
 * @n: Bit.
 * @index: Index to give value at - indices start at 0.
 *
 * Return: If  error - -1.
 *         Otherwise - Value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

