#include <stdio.h>
void main()
{
    char ch;

    printf("Enter Any Charactor: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("Capital Letter.\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Small Letter.\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digit.\n");
    }
    else
    {
        printf("Special Charactor.\n");
    }
}