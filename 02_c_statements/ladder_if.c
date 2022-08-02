#include <stdio.h>
int main(void)
{
    int x = 2, y = 10, z = 15;
    // if (x < y)
    //     printf("X is less than Y\n");
    // else if (x > y)
    //     printf("X is greater than Y\n");
    // else if (y < z)
    //     printf("Y is less than Z\n");
    // else if (y > z)
    //     printf("Y is greater than Z\n");
    (x < y) ? printf("x is less than y\n") : printf("x is greater than y\n");
}