#include <stdio.h>

int main()
{
    float u, t, d, a = 9.8;

    printf("Enter the value of initial velocity in m/s: ");
    scanf("%f", &u);

    printf("Enter the value of time in s: ");
    scanf("%f", &t);

    d = u * t + 0.5 * a * t * t;

    if (d > 1000)
    {
        printf("The distance cover by the object is %fkm", d * 0.001);
    }
    else
    {
        printf("The distance cover by the object is %fm", d);
    }
    return 0;
}

// Output:_________________________________________________________-

/*
Enter the value of initial velocity in m/s: 6
Enter the value of time in s: 7
The distance cover by the object is 282.100006m

Enter the value of initial velocity in m/s: 25
Enter the value of time in s: 125
The distance cover by the object is 79.687500km
*/