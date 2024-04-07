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
int f,o,y;
char *buf;
if (!filename)
return (0);
buf=malloc(letters);
if (!buf)
return (0);
f=open(filename, O_RDONLY);
if (f == -1)
{
free(buf);
return (0);
}
o=read(f, buf, letters);
if (o == -1)
{
free(buf);
close(f);
return (0);
}
y=write(STDOUT_FILENO, buf, o);
if (y == -1 || y != o)
{
free(buf);
close(f);
return (0);
}
free(buf);
close(f);
return (y);
}

