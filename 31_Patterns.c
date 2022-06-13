#include <stdio.h>

int main()
{
    int x = (int)'A';

    //________________________________________________________

    for (int i = x; i <= (x + 5); i++)
    {
        for (int j = (x + 5) - i; j >= 1; j--)
        {
            printf("%c", (char)i);
        }
        printf("\n");
    }
    // AAAAA
    // BBBB
    // CCC
    // DD
    // E

    //________________________________________________________

    for (int i = x + 5; i >= x; i--)
    {
        for (int j = x; j < i; j++)
        {
            printf("%c", (char)x + (j - x));
        }
        printf("\n");
    }

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A

    //________________________________________________________

    return 0;
}