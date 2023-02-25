#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int octal = 0, base = 1;
    while (num != 0)
    {
        octal = octal + (num % 8) * base;
        num = num / 8;
        base = base * 10;
    }
    printf("o%d\n", octal);
}