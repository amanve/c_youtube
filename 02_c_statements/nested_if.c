#include <stdio.h>
int main(void)
{
    int x = 5, y = 10, z = 15, a = 7;
    if (x < a)
    {
        if (a < y)
            printf("A is less than Y\n");
        else
        {
            if (a > z)
                printf("A is greater than Z\n");
            else
                printf("A is greatest\n");
        }
    }
    else
        printf("None statement is True\n");
}