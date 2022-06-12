#include <stdio.h>

int main()
{
    int s[5][3];
    float r;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks of Student have Roll No. is %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject Code %d: ", j + 1);
            scanf("%d", &s[i][j]);
        }
    }

    printf("\n \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            r = r + (float)(s[i][j]);
        }
        printf("Average Marks of Student have Roll No. %d is %.2f.\n", i + 1, r / 3);
        r = 0;
    }

    return 0;
}

// Output:

/*
Enter Marks of Student have Roll No. is 1
Enter Marks of Subject Code 1: 98
Enter Marks of Subject Code 2: 99
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 2
Enter Marks of Subject Code 1: 80
Enter Marks of Subject Code 2: 90
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 3
Enter Marks of Subject Code 1: 87
Enter Marks of Subject Code 2: 78
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 4
Enter Marks of Subject Code 1: 90
Enter Marks of Subject Code 2: 76
Enter Marks of Subject Code 3: 88
Enter Marks of Student have Roll No. is 5
Enter Marks of Subject Code 1: 79
Enter Marks of Subject Code 2: 78
Enter Marks of Subject Code 3: 98


Average Marks of Student have Roll No. 1 is 95.33.
Average Marks of Student have Roll No. 2 is 86.33.
Average Marks of Student have Roll No. 3 is 84.67.
Average Marks of Student have Roll No. 4 is 84.67.
Average Marks of Student have Roll No. 5 is 85.00.
*/