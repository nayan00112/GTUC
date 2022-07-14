// 44. Write a function Exchange to interchange the values of two variables, say x and y.
// illustrate the use of this function in a calling function.

#include <stdio.h>
void changer(int *, int *);
int main()
{
    int x, y;
    
    printf("Enter value of x and y variable: ");
    scanf("%d %d", &x, &y);

    changer(&x, &y);
    printf("Now, value of x and y is: %d %d", x, y);

    return 0;
}

void changer(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

/*
Output:

Enter value of x and y variable: 7 9
Now, value of x and y is: 9 7
*/