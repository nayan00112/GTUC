#include <stdio.h>
int main()
{
    int a;
    printf("Emter the value: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Given no. is 0.\n");
    }
    else if (a > 0)
    {
        printf("Given no. is Positive.\n");
    }
    else
    {
        printf("Given no. is Nagative.");
    }
    return 0;
}