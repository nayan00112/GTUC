// 56. Write a C program to print the address of character and the character of string using 
// pointer.

#include<stdio.h>
#include<string.h>
int main(){
    char m = 'D', arr[10]= "Hello C";

    printf("Address of variable m (%c) is %x.\n", m, &m);
    printf("Address of string is given below:\n");
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("variable: %c, address = %x.\n", arr[i], &arr[i]);
    }
    
    return 0;
}

/*
Address of variable m (D) is 203ff7fb.
Address of string is given below:
variable: H, address = 203ff7f1.
variable: e, address = 203ff7f2.
variable: l, address = 203ff7f3.
variable: l, address = 203ff7f4.
variable: o, address = 203ff7f5.
variable:  , address = 203ff7f6.
variable: C, address = 203ff7f7.
*/