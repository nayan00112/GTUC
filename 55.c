// 55. Write a C program to swap the two values using pointers.

#include <stdio.h>

int main()
{
    int a = 6, b = 4, t;
    int *x, *y;
    x = &a;
    y = &b;

    printf("value of a and b is : %d, %d\n", a, b);
    t = *x;
    *x = *y;
    *y = t;

    printf("Now, value of a and b is : %d, %d\n", a, b);
    return 0;
}

/*
value of a and b is : 6, 4
Now, value of a and b is : 4, 6
*/ 