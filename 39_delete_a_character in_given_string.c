// 39. Write a program to delete a character in given string

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], ch;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character to delete in string: ");
    scanf("%c", &ch);

    printf("New String is given below: \n");
    for (int i = 0; i < strlen(str); i++)
    {
        if (ch != str[i])
        {
            printf("%c", str[i]);
        }
    }
}


/*
Output:
Enter String: This is String. 
Enter Character to delete in string: i
New String is given below: 
Ths s Strng.
*/