/*
51. Define structure data type called time_struct containing three member’s integer hour,
integer minute and integer second. Develop a program that would assign values to the
individual number and display the time in the following format: 16: 40:51

*/

#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
}t1;


int main(){

    t1.hour = 16;
    t1.minute = 40;
    t1.second = 51;

    printf("Time is: %d: %d:%d ", t1.hour, t1.minute, t1.second);
    return 0;
}

// Output:
// Time is: 16: 40:51 