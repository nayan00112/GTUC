#include <stdio.h>

int main()
{
    int h[5], w[5], n = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d Height: ", i + 1);
        scanf("%d", &h[i]);

        printf("Enter %d Weight: ", i + 1);
        scanf("%d", &w[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        if (h[j] > 170 && w[j] < 50)
        {
            n++;
        }
    }
    if (n != 0)
    {
        printf("Person of heaving height gratter than 170 and weight less then 50 is %d.\n", n);
    }
    else
    {
        printf("No any person of heaving height gratter than 170 and weight less then 50.\n", n);
    }

    return 0;
}

// Output:
// Enter 1 Height: 180 
// Enter 1 Weight: 56
// Enter 2 Height: 120
// Enter 2 Weight: 40
// Enter 3 Height: 102
// Enter 3 Weight: 53
// Enter 4 Height: 190
// Enter 4 Weight: 67
// Enter 5 Height: 160
// Enter 1 Height: 180
// Enter 1 Weight: 54
// Enter 2 Height: 187
// Enter 2 Weight: 49Enter 3 Height: 148Enter 3 Weight: 78Enter 4 Height: 120
// Enter 4 Weight: 45
// Enter 5 Height: 110
// Enter 5 Weight: 43
// Person of heaving height gratter than 170 and weight less then 50 is 1.