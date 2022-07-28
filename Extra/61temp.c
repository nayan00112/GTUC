#include <stdio.h>

int main()
{
    int n, t1, t2 = 0; // n is number of elements which user wants to add in arry. t1 t2.. is temp. variables.
    printf("How many items you want to add in arry? ");
    scanf("%d", &n);

    int arr[n]; // Now arry declaration for n number of elements.

    for (int i = 0; i < n; i++) // assign values in arry.
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element any :");
    scanf("%d", &t1);

    printf("Entered element position in array is : ");

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == t1)
        {
            printf("%d ", j + 1);
            t2 = 1;
        }
    }

    if (t2 == 0)
    {
        printf("\nElement does not exist in arry. ");
    }

    return 0;
}

// Output:
/*
1.
    How many items you want to add in arry? 8
    Enter 1 element: 4
    Enter 2 element: 6
    Enter 3 element: 7
    Enter 4 element: 6
    Enter 5 element: 4
    Enter 6 element: 5
    Enter 7 element: 6
    Enter 8 element: 9

    Enter element any :7
    Entered element position in array is : 3

2.
    How many items you want to add in arry? 5
    Enter 1 element: 1
    Enter 2 element: 1
    Enter 3 element: 2
    Enter 4 element: 6
    Enter 5 element: 4
    Enter element any :1Entered element position in array is : 1 2
*/
