#include "main.h"
/**
 * _strcat - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int len = 0;
unsigned int c = 0;
    while (s[len] != 0)
    {       
    len++;  
    }
    while (c <= n)
    {
        putchar('.');
        c++;
    }
    
    while (n<len)
    {
        
        putchar(s[n]);
        n++;
    }
return (*s);
}
