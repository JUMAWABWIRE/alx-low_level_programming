#include "main.h"

/**
 * read_textfile - read a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letter printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, nrd);

	close(fn);

	free(buffer);

	return (wr);
}
