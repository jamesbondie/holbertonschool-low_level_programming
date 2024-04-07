#include "main.h"
/**
 * create_file - creates file for us
 * @filename: name of file
 * @text_content: content
 * Return: returns
 *
 */
int create_file(const char *filename, char *text_content)
{
int f, y, x = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[x])
x++;
}
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);
if (text_content != NULL)
{
y = write(f, text_content, x);
if (y == -1 || y != x)
{
close(f);
return (-1);
}
}
close(f);
return (1);
}

