#include <stdio.h>

int main()
{
    int d[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d[i][j] = (4 * i) + j + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", d[i][j]);
        }
        printf("\n");
    }
}