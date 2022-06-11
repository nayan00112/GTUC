#include <stdio.h>

int main()
{
    int arr[10], max, min;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d Number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }

    printf("Maximim Number is : %d\n", max);
    printf("Minimum Number is : %d\n", min);

    return 0;
}


// Output:__________________________________________________

// Enter 1 Number: 43
// Enter 2 Number: 556
// Enter 3 Number: 34
// Enter 4 Number: 21
// Enter 5 Number: 5
// Enter 6 Number: 246
// Enter 7 Number: 3432
// Enter 8 Number: 54
// Enter 9 Number: 245
// Enter 10 Number: 22
// Maximim Number is : 3432
// Minimum Number is : 5