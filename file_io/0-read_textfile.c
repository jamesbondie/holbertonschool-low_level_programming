#include "main.h"


/**
 * read_textfile - prints text for us
 * @filename: name of file
 * @letters: letters
 * Return: returns
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f, o, y;
char *buffer;
if (!filename)
return (0);
buffer = malloc(letters);
if (!buffer)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
{
free(buffer);
return (0);
}
o = read(f, buffer, letters);
if (o == -1)
{
free(buffer);
close(f);
return (0);
}
y = write(STDOUT_FILENO, buffer, o);
if (y == -1 || y != o)
{
free(buffer);
close(f);
return (0);
}
free(buffer);
close(f);
return (y);
}

