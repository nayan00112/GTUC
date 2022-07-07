#include <stdio.h>

int main()
{
    int a[10] = {12, 34, 223, 24, 21, 34, 577, 443, 242, 24};

    for (int i = 0; i < 10; i++)
    {
        (a[i] % 2 == 0) ? (printf("%d even\n", a[i])) : (printf("%d odd\n", a[i]));
    }
    return 0;
}

/*
Output:
12 even
34 even
223 odd
24 even
21 odd
34 even
577 odd
443 odd
242 even
24 even

*/