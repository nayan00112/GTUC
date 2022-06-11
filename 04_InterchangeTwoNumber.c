#include <stdio.h>
int main()
{
    int a = 3;
    int b = 4;
    printf("a=%d b=%d\n", a, b);
    int c = b;
    b = a;
    a = c;
    printf("a=%d b=%d", a, b);
    return 0;
}