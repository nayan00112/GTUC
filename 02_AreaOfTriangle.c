#include <stdio.h>

void main () {
    float hValue, bValue, area;

    printf("Enter Value of Height of Trayangal: \n");
    scanf("%f", &hValue);
    
    printf("Enter Value of Base: \n");
    scanf("%f", &bValue);
    
    area = 0.5 * hValue * bValue;
    printf("Value of Area of Trayangle is: %f", area);

}