/*
 * main - Entry point
 * Description: 'the program's description'
 * @parameter: descri
 * * Return: Always 0 (Success)
*/
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}

