#include <stdio.h>
int factorial(int);
int main()
{
    int a, fact;
    printf("Enter Positive Integer Number: ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("Factoriyal is : %d", fact);
}

int factorial(int i)
{

    if (i == 1 || i == 0)
    {
        return 1;
    }

    else
    {
        return i * factorial(i - 1);
    }
}

// Output:________________________________________________-

// Enter Positive Integer Number: 4
// Factoriyal is : 24

// Enter Positive Integer Number: 2
// Factoriyal is : 2

// Enter Positive Integer Number: 6
// Factoriyal is : 720

// Enter Positive Integer Number: 1
// Factoriyal is : 1

// Enter Positive Integer Number: 0
// Factoriyal is : 1