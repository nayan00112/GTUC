#include <stdio.h>

int main()
{
    float Basic, Da, Hra, Ma, Pf, Gross, Nt;

    printf("Enter Basic Salary: ");
    scanf("%f", &Basic);

    Ma = 300;

    Da = 0.1 * Basic;
    Hra = 0.075 * Basic;
    Pf = 0.125 * Basic;

    Gross = Basic + Da + Hra + Ma;
    Nt = Gross - Pf;

    printf("\nYour PaySlip is: \n");
    printf("Ma = %.2f\n", Ma);

    printf("Da = %.2f\n", Da);
    printf("Hra = %.2f\n", Hra);
    printf("Pf = %.2f\n", Pf);

    printf("Gross = %.2f\n", Gross);
    printf("Nt = %.2f\n", Nt);

    return 0;
}

// Output:__________________________________________________

/*
Enter Basic Salary: 100000

Your PaySlip is:
Ma = 300.00
Da = 10000.00
Hra = 7500.00
Pf = 12500.00
Gross = 117800.00
Nt = 105300.00
*/