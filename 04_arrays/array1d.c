#include <stdio.h>
int main(void)
{
    int a[10];
    for (int t = 0; t < 10; t++)
    {
        printf("Enter %d th element: ", t);
        scanf("%d", &a[t]);
    }
    for (int t = 0; t < 10; t++)
    {
        printf("%d th element of the array is %d\n", t, a[t]);
    }
}