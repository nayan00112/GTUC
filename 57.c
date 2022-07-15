// 57. Write a program to access elements using pointer.

#include<stdio.h>

int main(){
    int a = 4;
    int *p =  &a;

    printf("Pointer of variable Value is %d.", *p);
    return 0;
}
// Output:
// Pointer of variable Value is 4.