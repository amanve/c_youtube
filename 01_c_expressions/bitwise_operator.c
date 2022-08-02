#include <stdio.h>
int main(void)
{
    int x = 10, y = 15;
    printf("AND - %d\n", (x & y));
    printf("OR - %d\n", (x | y));
    printf("^ - %d\n", (x ^ y));
    printf("~ - %d\n", (~x));
    printf("Right Shift - %d\n", (x >> 1));
    printf("Left Shift - %d\n", (x << 1));
}