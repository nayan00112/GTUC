//41. Write a program to convert string into upper case


#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], ch;
    printf("Enter String: ");
    gets(str);
    printf("String in UPPER Case: \n");
    puts(strupr(str));
}

/*
Output:

Enter String: I am Nayan.
String in UPPER Case: 
I AM NAYAN.
*/