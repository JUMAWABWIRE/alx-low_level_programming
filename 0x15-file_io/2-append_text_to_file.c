#include "main.h"
#include <stdlib.h>

/**
 * Auth: Juma Wabwire
 * File: 2-append_text_to_file.c
 * Desc: A function appending a text at the end of the file.
 */

/**
 * append_text_to_file - Appends text in the end of the file.
 * @filename: Pointer to the name of the file.
 * text_content: String to addat the end of the file.
 * Return: When function fail or null fie name - -1.
 *         Otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int o, wr, len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (len = 0; text_content[len])
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_cont, len);

	if (0 == -1 || wr == -1)
		return (-1);
	close(o);
	return (1);
}

