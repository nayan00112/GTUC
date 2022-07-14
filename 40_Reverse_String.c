// 40. Write a program to reverse string.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);

    printf("Reverse String is given below:\n");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

/*
Output:

1.  Enter String: Reverse String
    Reverse String is given below:
    gnirtS esreveR


2.  Enter String: This is C Language Programm.
    Reverse String is given below:
    .mmargorP egaugnaL C si sihT
*/