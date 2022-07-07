#include <stdio.h>

int main()
{
    int max;
    int a[10] = {42, 334, 223, 946, 241, 234, 577, 443, 242, 724};
    max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Max. no. fro arry is: %d", max);
    return 0;
}
// Output:
// Max. no. fro arry is: 946