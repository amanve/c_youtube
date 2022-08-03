#include <stdio.h>
int main(void)
{
    int flag, nFlag, num;
    printf("Enter value for flag: ");
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        printf("Enter value for negative flag: ");
        scanf("%d", &nFlag);
        printf("Enter a number: ");
        scanf("%d", &num);
        switch (nFlag)
        {
        case 1:
            if (num < 0)
                printf("%d is negative\n", num);
            else
                printf("%d is non negative\n", num);
            break;
        default:
            printf("Nested switch default\n");
            break;
        }
        break;
    case 2:
        printf("Case 2\n");
    case 3:
        printf("Case 3\n");
        break;
    case 4:
        printf("Case 4\n");
        break;
    case 5:
        printf("Case 5\n");
        break;

    default:
        printf("Default Case\n");
        break;
    }
}