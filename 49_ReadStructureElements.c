// 49. Write a program to read structure elements from keyboard.

#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    char branch[20];
    int rolnum;
    char email[256];
    int sem;
};

int main()
{
    struct Student s1;

    printf("Enter student name: ");
    gets(s1.name);
    printf("Enter student's Branch: ");
    gets(s1.branch);
    printf("Enter student Roll No.: ");
    scanf("%d", &s1.rolnum);
    printf("Enter student Sem: ");
    scanf("%d", &s1.sem);
    getchar(); // buffer
    printf("Enter student email:");
    gets(s1.email);
    
    printf("\nMy name is %s from %s engineering.\nMy rol number is %d.\nYoy can contact me : %s\n", s1.name, s1.branch, s1.rolnum, s1.email);

    return 0;
}

/*
Output:
Enter student name: Nayan Patel
Enter student's Branch: Computer
Enter student Roll No.: 87
Enter student Sem: 2
Enter student email:nayanpatel123@nayan.c

My name is Nayan Patel from Computer engineering.
My rol number is 87.
Yoy can contact me : nayanpatel123@nayan.c

*/