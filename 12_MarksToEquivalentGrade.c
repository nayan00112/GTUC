#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the Markes: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Distinction\n");
    }
    else if (marks <= 79 && marks >= 60)
    {
        printf("First Class\n");
    }
    else if (marks <= 59 && marks >= 40)
    {
        printf("Second Class\n");
    }
    else if (marks <= 39 && marks >= 0)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Inviled Entered Markes\n");
    }

    return 0;
}