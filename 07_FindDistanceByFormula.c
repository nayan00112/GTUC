#include <stdio.h>

int main()
{
    float u, t, d, a = 9.8;

    printf("Enter the value of initial velocity in m/s.\n");
    scanf("%f", &u);

    printf("Enter the value of time in s.\n");
    scanf("%f", &t);

    d = u * t + 0.5 * a * t * t;

    if (d > 1000)
    {
        printf("Thw distance cover by the object is %fkm", d * 0.001);
    }
    else
    {
        printf("Thw distance cover by the object is %fm", d);
    }
    return 0;
}