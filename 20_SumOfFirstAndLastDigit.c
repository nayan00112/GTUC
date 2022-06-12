#include <stdio.h>

int main()
{
    int num, ld;
    printf("Enter Any Number: ");
    scanf("%d", &num);
    if (num > 9)
    {
        ld = num % 10;

        while (num > 9)
        {
            num = num / 10;
        }

        // Now num become First Digit.

        printf("The sum of first and last digit is %d.\n", ld + num);
    }
    else
    {
        printf("The sum of first and last digit is %d.\n", 2 * num);
    }
    return 0;
}

// Output:________________________________________________

// Enter Any Number: 2
// The sum of first and last digit is 4.

// Enter Any Number: 10
// The sum of first and last digit is 1.

// Enter Any Number: 8
// The sum of first and last digit is 16.

// Enter Any Number: 81
// The sum of first and last digit is 9.