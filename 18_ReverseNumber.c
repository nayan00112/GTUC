#include <stdio.h>
#include <math.h>

int main()
{
    int a, arr[8], i = 0, sum = 0;
    printf("Enter an Integer Number: ");
    scanf("%d", &a);

    if (a > 10)
    {
        while (a > 9)
        {
            arr[i] = a % 10;
            a = a / 10;
            i++;
        }
        arr[i] = a;

        for (int j = 0; j <= i; j++)
        {
            sum = sum + arr[j] * pow(10, (i - j));
        }
    }
    else
    {
        sum = a;
    }

    printf("Revers Number is = %d", sum);
    return 0;
}

// Output:________________________________________________--

// Enter an Integer Number: 3257
// Revers Number is = 7523

// Enter an Integer Number: 654
// Revers Number is = 456

// Enter an Integer Number: 423803
// Revers Number is = 308324

// Enter an Integer Number: 3
// Revers Number is = 3

// Enter an Integer Number: 9
// Revers Number is = 9
