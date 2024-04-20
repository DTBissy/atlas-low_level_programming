#include "main.h"
/**
* append_text_to_file - Appends text to a file
* @filename: The file created
* @text_content: The content
* Return: A succesful append
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, bw;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);
if (fd < 0)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}

while (*(text_content + len))
len++;

bw = write(fd, text_content, len);
if (bw < 0)
{
close(fd);
return (-1);
}
return (1);
}