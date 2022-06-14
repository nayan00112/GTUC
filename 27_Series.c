#include <stdio.h>
int fac(int);

int main()
{
    int n;
    float sum = 0;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    (n == 0) ? (sum = 1) : (sum = 0);

    for (int i = 1; i <= n; i++)
    {
        sum += 1 / (float)fac(i);
    }
    printf("Sum is : %.4f", sum);
    return 0;
}

int fac(int i)
{
    if (i == 0)
    {
        return 1;
    }
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return i * fac(i - 1);
    }
}


// Output:

/*
Enter Value of n: 3
Sum is : 1.6667

Enter Value of n: 18
Sum is : 1.7183

Enter Value of n: 2
Sum is : 1.5000

Enter Value of n: 0
Sum is : 0.0000

Enter Value of n: 5
Sum is : 1.7167
*/