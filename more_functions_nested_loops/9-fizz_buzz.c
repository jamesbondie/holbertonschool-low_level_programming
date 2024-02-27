/*
 * main - Entry point
 * Description: 'the program's description'
 * @parameter: descri
 * * Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int i = 1;
while (i <= 100) {
int d = 0;       
if (i % 3 == 0) {
printf("Fizz");
d = 1;
}     
if (i % 5 == 0)
{
printf("Buzz");
d = 1;
}     
if (!d) {
printf("%d", i);
}
if (i != 100) {
printf(" ");
}      
i++;
}
return (0);
}
