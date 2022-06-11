#include <stdio.h>
int main()
{
    float a;
    printf("Enter the marks of student: ");
    scanf("%f", &a);

    if (a <= 33)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n Pass");
    }
    return 0;
}