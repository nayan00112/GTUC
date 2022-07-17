// 59. Write a program to write a string in file

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[100], strread[100];
    printf("Enter String: ");
    gets(str);

    fp = fopen("59_File.txt", "w");
    fprintf(fp, "%s", str);
    fclose(fp);

    fp = fopen("59_File.txt", "r");

    fread(strread, 100,1, fp);

    printf("String in file is :");
    puts(strread);

    fclose(fp);

    return 0;
}

/*
Output in console:

Enter String: Nayan Patel
String in file is :Nayan Patel
*/ 