#include "main.h"
/**
* create_file - Creates a file
* @filename: The file to open
* @text_content: Content in the file
* Return: Succsful open
*/
int create_file(const char *filename, char *text_content)
{
int fd, len = 0;
int bw;

if (filename == NULL)
{
	return (-1);
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < 0)
{
return (-1);
}
while (text_content && *(text_content + len))
len++;

bw = write(fd, text_content, len);
close(fd);
if (bw < 0)
return (-1);
return (1);
}
