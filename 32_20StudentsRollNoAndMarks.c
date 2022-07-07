#include <stdio.h>

int main()
{
    int sm[20][2];
    printf("Enter RollNo. and Marks\n(ex. 1 30, where 1 is rol no. and 30 is marks)\n\n");
    for (int i = 0; i < 20; i++)
    {
        printf("\t%d>> ", i + 1);
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &sm[i][j]);
        }
    }

    printf("\n\n\n\n");

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", sm[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
OUTPUT:

Enter RollNo. and Marks
(ex. 1 30, where 1 is rol no. and 30 is marks)

        1>> 1 23
        2>> 2 45
        3>> 3 45
        4>> 4 33
        5>> 5 34
        6>> 6 46
        7>> 7 54
        8>> 8 75
        9>> 9 23
        10>> 10 34
        11>> 11 34
        12>> 12 34
        13>> 13 46
        14>> 14 67
        15>> 15 62
        16>> 16 64
        17>> 17 53
        18>> 18 76
        19>> 19 44
        20>> 20 34




1 23
2 45
3 45
4 33
5 34
6 46
7 54
8 75
9 23
10 34
11 34
12 34
13 46
14 67
15 62
16 64
17 53
18 76
19 44
20 34
*/