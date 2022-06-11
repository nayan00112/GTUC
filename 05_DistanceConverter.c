#include <stdio.h>

int main() {
    float km, inch, meter, cm;
    
    printf("Enter value in km: \n");
    scanf("%f", &km);
    
    inch = 39370.078*km;
    printf("Value in inch is: %f\n", inch);
    
    meter = 1000*km;
    printf("Value in meter is: %f\n", meter);

    cm = meter*100;
    printf("Value in cm is: %f\n", cm);
}