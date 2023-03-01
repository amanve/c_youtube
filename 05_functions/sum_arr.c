#include <stdio.h>

// int sum_arr(int, int[]);

int sum_arr(int, int[*]);

int main(void)
{
    printf("%d\n", sum_arr(5, (int[]){3, 4, 9, 0, 3}));
}

int sum_arr(int b, int a[b])
{
    int sum = 0;
    for (int i = 0; i < b; i++)
        sum += a[i];
    return sum;
}
