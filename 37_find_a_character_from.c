// Write a program to find a character from given string.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], ch;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character to find in string: ");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (ch == str[i])
        {
            printf("index of character in string : %d\n", i);
        }
    }
}

/*
Output:
Enter String: My name is Nayan.
Enter Character to find in string: n
index of character in string : 3
index of character in string : 15
*/