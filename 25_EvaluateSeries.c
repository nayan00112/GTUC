#include <stdio.h>
#include<math.h>

int main()
{
    int n, sum = 0;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(i + 1, 2);
    }
    printf("Sum is: %d", sum);
    return 0;
}

// Output:

// Enter Value of n: 3
// Sum is: 14

// Enter Value of n: 14
// Sum is: 1015