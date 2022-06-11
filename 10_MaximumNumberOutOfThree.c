#include <stdio.h>
int main()
{

    int a, b, c;

    printf("Enter first Value: ");
    scanf("%d", &a);

    printf("Enter second Value: ");
    scanf("%d", &b);

    printf("Enter third Value: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("Maximum number is %d.\n", a);
        }
        else
        {
            printf("Maximum number is %d.\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Maximum number is %d.\n", b);
        }
        else
        {
            printf("Maximum number is %d.\n", c);
        }
    }
}