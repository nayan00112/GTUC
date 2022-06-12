#include <stdio.h>
int main()
{
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    int fs[n];

    fs[0] = 0;
    for (int i = 1; i < n; i++)
    {

        if (i == 1)
        {
            fs[i] = 1;
        }
        else if (i == 2)
        {
            fs[i] = 1;
        }
        else
        {
            fs[i] = fs[i - 2] + fs[i - 1];
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", fs[j]);
    }

    return 0;
}

// Output____________________________________

// Enter Value of n: 20
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181

// Enter Value of n: 12
// 0 1 1 2 3 5 8 13 21 34 55 89
