#include <stdio.h>

void main()
{
    int intI, intP, intR, intN;

    printf("Enter Value of P: \n");
    scanf("%d", &intP);

    printf("Enter Value of R: \n");
    scanf("%d", &intR);

    printf("Enter Value of N: \n");
    scanf("%d", &intN);

    intI = (intP * intR * intN) / 100;
    printf("Value of I is: %d", intI);
}

// Output:______________________________________--
/*
Enter Value of P:
1100
Enter Value of R:
4
Enter Value of N:
3
Value of I is: 132

Enter Value of P:
26000
Enter Value of R:
4
Enter Value of N:
6
Value of I is: 6240
*/