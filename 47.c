// Write a C program using global variable, static variable

#include<stdio.h>
int x = 6; // Globle Variable.
int main(){
    int a = 4; // Local Variable.
    static int b = 7; // Static Variable.

    a = 8; // Possible
    x = 6; // Possible

    //b = 7; // ERROR, We can not change static variable now. it assign value only once time.

    return 0;
}