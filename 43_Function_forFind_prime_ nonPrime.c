// 43. Write a function in the program to return 1 if number is prime otherwise return 0

#include <stdio.h>
int FunNum(int);
void main()
{
    unsigned int a;
    int b;
    printf("Enter Number: ");
    scanf("%d", &a);

    b = FunNum(a);

    printf("We get from function is %d. Which means number is ", b);
    (b == 1) ? (printf("Prime.")) : (printf("Non Prime."));
}

int FunNum(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

/*
Output:

1. Enter Number: 4
   We get from function is 1. Which means number is Prime.

2. Enter Number: 6
   We get from function is 0. Which means number is Non Prime.
*/