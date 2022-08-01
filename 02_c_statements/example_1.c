#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // if (b) // if (b != 0)
    //     printf("Division is: %d\n", (a / b));
    // else
    //     printf("Not divisible 0\n");

    b ? printf("Division is: %d\n", (a / b)) : printf("Not divisible 0\n");
}