#include <stdio.h>
int main(void)
{
    int x = 0, y = 20, a = 15, b = 20;
    printf("Greater than - %d\n", (x > y));
    printf("Less than - %d\n", (x < y));
    printf("Greater than or equal - %d\n", (b >= y));
    printf("Less than or equal - %d\n", (x <= a));
    printf("Equal - %d\n", (x == a));
    printf("Not Equal - %d\n", (x != a));
    printf("AND - %d\n", (x && y));
    printf("OR - %d\n", (x || y));
    printf("NOT - %d\n", (!x));
    printf("NOT - %d\n", (!y));
}