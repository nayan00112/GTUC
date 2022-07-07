#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float avg = 0, gm = 1, hm = 0, tem = 0, hok = 1;
    printf("Hoy many number you want to add? ");
    scanf("%d", &n);

    int numarr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Number: ", i + 1);
        scanf("%d", &numarr[i]);

        avg += (float)(numarr[i]) / (float)n;

        gm *= pow((float)numarr[i], 1 / (float)n);

        if (numarr[i] != 0)
        {
            tem += 1 / (float)numarr[i];
        }
        else
        {
            hok = 0;
        }
    }
    printf("Average is : %f\n", avg);
    printf("Geometry mean is : %f\n", gm);
    if (hok == 1)
    {
        printf("Harmonic mean is : %f\n", n / tem);
    }
    else
    {
        printf("Harmonic series is not defined\n");
    }

    return 0;
}

/*
Output:

Hoy many number you want to add? 2
Enter 1 Number: 3
Enter 2 Number: 2
Average is : 2.500000
Geometry mean is : 2.449490
Harmonic mean is : 2.400000

Hoy many number you want to add? 6
Enter 1 Number: 4
Enter 2 Number: 3
Enter 3 Number: 6
Enter 4 Number: 48
Enter 5 Number: 9
Enter 6 Number: 7
Average is : 12.833334
Geometry mean is : 7.756261
Harmonic mean is : 5.854792

Hoy many number you want to add? 3
Enter 1 Number: 5
Enter 2 Number: 4
Enter 3 Number: 7
Average is : 5.333333
Geometry mean is : 5.192494
Harmonic mean is : 5.060241

Hoy many number you want to add? 5
Enter 1 Number: 9
Enter 2 Number: 6
Enter 3 Number: 0
Enter 4 Number: 5
Enter 5 Number: 3
Average is : 4.600000
Geometry mean is : 0.000000
Harmonic series is not defined
*/