// 42. Write a program that defines a function to add first n numbers.

#include <stdio.h>
int sum(int);
int main()
{
    int n, sNum;
    printf("How much number you want to add? ");
    scanf("%d", &n);

    printf("Sum is : %d", sum(n));
    return 0;
}

int sum(int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: \n", i + 1);
        scanf("%d", &a);
        a += a;
    }
    return a;
}

/*
Output:

How much number you want to add? 6
Enter 1 number: 
332
Enter 2 number: 
342
Enter 3 number: 
435
Enter 4 number: 
542
Enter 5 number: 
235
Enter 6 number: 
546
Sum is : 1092
*/