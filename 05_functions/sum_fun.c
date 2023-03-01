#include <stdio.h>

// int sum(int a, int b); // DECLARATION of a function
int sum(int, int);
int sum(int a, int b)
{
    // Empty declaration
}

int main(void)
{
    int x = 5, y = 10;
    int s = sum(x, y);
    printf("%d\n", s);
}

/* DEFINITION of a function */
int sum(int a, int b)
{
    return a + b;
}