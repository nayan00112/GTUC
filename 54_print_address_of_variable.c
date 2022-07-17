// 54. Write a program to print address of variable using pointer.
#include<stdio.h>

int main(){
    int a = 5;
    int *b;
    b = &a;

    printf("Value of variable a is %d.\n", a);
    printf("Address of variable a is %x.\n", b);
    return 0;
}

/*
Output:

Value of variable a is 5.
Address of variable a is 95dff994.
 * /
