#include <stdio.h>
int main(void)
{
    int num, r_num = 0;
    scanf("%d", &num);
    r_num = r_num + (num % 10) * 10;
    r_num = r_num + (num / 10);
    printf("%d\n", r_num);
}