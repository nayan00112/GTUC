#include <stdio.h>

int main()
{
    int a, tem = 0;
    printf("Enter Integer Number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        if (a != 2)
        {
            printf("Non Prime Number");
        }
        else
        {
            printf("Prime Number");
        }
    }

    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                tem = 1;
                break;
            }
        }
        if (tem == 1)
        {
            printf("Non Prime Number");
        }
        else
        {
            printf("Prime Number");
        }
    }
    return 0;
}


// Output: __________________________________________-
/*
Enter Integer Number: 4
Non Prime Number

Enter Integer Number: 2
Prime Number

Enter Integer Number: 49
Non Prime Number

Enter Integer Number: 13
Prime Number
*/