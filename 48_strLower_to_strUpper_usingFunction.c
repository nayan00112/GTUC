// Write a function that will scan a character string passed as an argument and convert all
// lowercase character into their uppercase equivalents

#include <stdio.h>
#include <string.h>
void sUpr(char[]);
int main()
{
    char str[100] = "hello, i am nayan.";

    sUpr(str);
    return 0;
}

void sUpr(char a[])
{
    printf("String in uppercase:\n");
    strupr(a);
    puts(a);
}