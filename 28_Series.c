#include <stdio.h>
#include <math.h>
int fac(int);

int main()
{
    int n;
    float sum = 0;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= 9; i++)
    {
        if (i % 2 == 0)
        {
            sum += pow(n, i) / (float)fac(i);
        }
        else
        {
            sum -= pow(n, i) / (float)fac(i);
        }
    }
    printf("Sum is : %f", sum);
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


// Output:____________________________________________

/*
Enter Value of n: 2
Sum is : 0.135097

Enter Value of n: 6
Sum is : -10.657142

Enter Value of n: 3
Sum is : 0.037054
*/