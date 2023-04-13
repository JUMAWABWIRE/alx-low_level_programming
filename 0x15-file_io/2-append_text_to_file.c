#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appendinds text at the end of the file.
 * @filename: the name of the file.
 * @text_content: String to add at the end of the file.
 * Return: 1, otherwise -1
 */
int append_text_to_file(constant char *filename, char *text_content)
{
int fd;
int nrd;
int wr;

if (filename == NULL)
return (-1);

if (text_content)
{
for (nrd = 0; text_content[nrd]; nrd++)

	;
wr = write(fd, text_content, nrd);

if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
wr = write(fd, text_content, nrd);
if (wr == -1)
return (-1);
}

close(fd);

return (1);
}
