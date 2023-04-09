#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and print all letters
 * @filename: filename.
 * @letters: tally of letter printed
 *
 * Return: tally of letters printed. iIf fail return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t rd, wr;
	char *buffer;

	if (fn == -1)
		return (0);

	buffer = malloc(size of(char) * letters);
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);

close(fn);

free(buffer);

return (wr);

}
