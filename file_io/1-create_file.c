#include "main.h"
/**
* create_file - Creates a file
* @filename: The file to open
* @text_content: Content in the file
* Return: Succsful open
*/
int create_file(const char *filename, char *text_content)
{
int fd;

ssize_t bw;

if (filename == NULL)
{
	return (-1);
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < 0)
{
perror("Error creating or opening file");
return (-1);
}

if (chmod(filename, S_IRUSR | S_IWUSR) < 0)
{
perror("Error setting file permissions");
close(fd);
return (-1);
}

if (text_content == NULL)
{
bw = write(fd, text_content, strlen(text_content));
if (bw < 0)
{
	perror("Error writing to file");
	close(fd);
	return (-1);
}
}
close(fd);
return (-1);
}
