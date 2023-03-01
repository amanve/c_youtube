#include <stdio.h>

/*int power(int x, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = result * x;

    return result;
}*/

int power(int x, int n)
{
    int result = 1;
    while (n--)
        result *= x;
    return result;
}

int main(void)
{
    int a = 5, b = 2;
    printf("%d\n", power(a, b));
}