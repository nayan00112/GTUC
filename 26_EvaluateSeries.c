#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1 / (float)i);
    }
    printf("Sum is: %.4f", sum);

    return 0;
}

// Output:

// Enter Value of n: 4
// Sum is: 2.0833

// Enter Value of n: 2
// Sum is: 1.5000

// Enter Value of n: 7
// Sum is: 2.5929