#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the value of Temp. in C \n");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("The converted value of C in F is: %f", f);
    return 0;
}