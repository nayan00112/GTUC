#include <stdio.h>

int main() {
    float km, inch, meter, feet, cm;
    
    printf("Enter value in km: \n");
    scanf("%f", &km);
    
    inch = 39370.079*km;
    printf("Value in inch is: %f\n", inch);
    
    meter = 1000*km;
    printf("Value in meter is: %f\n", meter);

    feet = 3281*km;
    printf("Value in feet is: %f\n", feet);

    cm = meter*100;
    printf("Value in cm is: %f\n", cm);
}

// Output:______________________________________________-
/*
Enter value in km:
1
Value in inch is: 39370.078125
Value in meter is: 1000.000000
Value in feet is: 3281.000000
Value in cm is: 100000.000000

Enter value in km: 
12
Value in inch is: 472440.937500
Value in meter is: 12000.000000
Value in feet is: 39372.000000
Value in cm is: 1200000.000000
*/