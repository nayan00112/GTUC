#include <stdio.h>

void main() {
    int intI, intP, intR, intN;
    
    printf("Enter Value of P: \n");
    scanf("%d", &intP);
    
    printf("Enter Value of R: \n");
    scanf("%d", &intR);
    
    printf("Enter Value of N: \n");
    scanf("%d", &intN);
    
    intI = intP * intR * intN;
    printf("Value of I is: %d", intI);
}