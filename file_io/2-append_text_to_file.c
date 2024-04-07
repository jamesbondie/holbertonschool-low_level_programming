#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends texts to file for us
 * @filename: name of file
 * @text_content: content
 * Return: returns
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, y;
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content)
y = write(f, text_content, strlen(text_content));
else
return (1);
if (y == -1)
return (-1);
close(f);
return (1);
}
