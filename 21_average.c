#include <stdio.h>

int main()
{
    int n, sum, t;
    printf("How many number you want to add? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &t);
        sum += t;
    }

    printf("The sum of all numbers is %d\n", sum);
    printf("The Average of numbers is %.2f\n", (float)sum/n);
    return 0;
}

// Output:______________________________________________________

// How many number you want to add? 5
// Enter num 1: 43
// Enter num 2: 35
// Enter num 3: 2
// Enter num 4: 64
// Enter num 5: 75
// The sum of all numbers is 219
// The Average of numbers is 43.80

// How many number you want to add? 2
// Enter num 1: 68
// Enter num 2: 89
// The sum of all numbers is 157
// The Average of numbers is 78.50