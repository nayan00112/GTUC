#include <stdio.h>

int main()
{
    int a, ld;
    printf("Enter The Integer Value: ");
    scanf("%d", &a);

    ld = a % 10;

    if (ld % 2 == 1)
    {
        printf("Last digit of given number %d is %d is odd number.\n", a, ld);
    }
    else
    {
        printf("Last digit of given number %d is %d is even number\n", a, ld);
    }
    return 0;
}


// Output:__________________________________________________

// Enter The Integer Value: 424
// Last digit of given number 424 is 4 is even number

// Enter The Integer Value: 77  
// Last digit of given number 77 is 7 is odd number.