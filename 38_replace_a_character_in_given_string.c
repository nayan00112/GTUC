// 38. Write a program to replace a character in given string.


#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], ch, chr;
    printf("Enter String: ");
    gets(str);

    printf("Enter replace char: ");
    ch = getchar();

    getchar();

    printf("Enter New Character: ");
    chr = getchar();

    for (int i = 0; i < strlen(str); i++)
    {
        if (ch == str[i])
        {
            str[i] = chr;
        }
    }
    printf("New String is: ");
    puts(str);
}
