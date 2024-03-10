#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main -  wdqwdqwdqsdqwdq
 * @argc: asdasdasdasdt
 * @argv: arararrarawdwd
 * Return: 0
 **/

int main(int argc, char *argv[])
{
int j = 0;
int i = 1;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
sum = 0;
for (; i < argc; i++)
{
char *arg = argv[i];
for (; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
