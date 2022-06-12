#include <stdio.h>
int factorial(int);
int main()
{
    int a, fact;
    printf("Enter an Integer Number: ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("Factoriyal is : %d", fact);
}

int factorial(int i)
{
    if (i == 1){
        return 1;
    }
    else{
        return i * factorial(i - 1);
    }
}


// Output:________________________________________________-

// Enter an Integer Number: 4
// Factoriyal is : 24

// Enter an Integer Number: 2
// Factoriyal is : 2

// Enter an Integer Number: 6
// Factoriyal is : 720