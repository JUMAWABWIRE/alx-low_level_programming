#include "main.h"

/**
 * Auth: Juma Wabwire
 * Desc: Append a txt file at the end of the a file string.
 */

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The Filename.
 * @text_content: The string to add the file.
 *
 * Return: If the file exists -1
 * Othwersie -1 if it does not exist.          
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int nrd;
int wr;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content)
{
for (nrd = 0; text_content[nrd]; nrd++);

wr = write(fd, text_content, nrd);

if (wr == -1)
return (-1);
}

close(fd);

return (1);
}
