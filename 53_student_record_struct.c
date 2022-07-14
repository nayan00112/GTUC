/*
53. Design a structure student_record to contain name, branch and total marks obtained.
Develop a program to read data for 10 students in a class and print them.


*/

#include <stdio.h>
struct student_record
{
    char name[20];
    char branch[20];
    float totalMarks;
};

int main()
{
    int n = 10;
    struct student_record std[n];

    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter Student name: ");
        gets(std[i].name);
        printf("Enter Student Branch: ");
        gets(std[i].branch);
        printf("Enter Student Total Marks: ");
        scanf("%f", &std[i].totalMarks);
        getchar();
    }
    printf("/n");
    for (int i = 0; i < n; i++)
    {
        printf("Student Name %s.\n", std[i].name);
        printf("Student Branch %s.\n", std[i].branch);
        printf("Student Total Marks %.4f.\n", std[i].totalMarks);
    }

    return 0;
}

/*
Output:

Student 1
Enter Student name: Raj
Enter Student Branch: comp
Enter Student Total Marks: 88
Student 2
Enter Student name: Raju
Enter Student Branch: comp
Enter Student Total Marks: 98
Student 3
Enter Student name: Sujal
Enter Student Branch: comp
Enter Student Total Marks: 78
Student 4
Enter Student name: Prvin
Enter Student Branch: comp
Enter Student Total Marks: 78
Student 5
Enter Student name: Romik
Enter Student Branch: comp
Enter Student Total Marks: 67
Student 6
Enter Student name: Rajen
Enter Student Branch: comp
Enter Student Total Marks: 77
Student 7
Enter Student name: Rajan
Enter Student Branch: comp
Enter Student Total Marks: 66
Student 8
Enter Student name: Sarjan
Enter Student Branch: comp
Enter Student Total Marks: 89
Student 9
Enter Student name: Jay
Enter Student Branch: comp
Enter Student Total Marks: 77
Student 10
Enter Student name: Kunal
Enter Student Branch: comp
Enter Student Total Marks: 78
/nStudent Name Raj.
Student Branch comp.
Student Total Marks 88.0000.
Student Name Raju.
Student Branch comp.
Student Total Marks 98.0000.
Student Name Sujal.
Student Branch comp.
Student Total Marks 78.0000.
Student Name Prvin.
Student Branch comp.
Student Total Marks 78.0000.
Student Name Romik.
Student Branch comp.
Student Total Marks 67.0000.
Student Name Rajen.
Student Branch comp.
Student Total Marks 77.0000.
Student Name Rajan.
Student Branch comp.
Student Total Marks 66.0000.
Student Name Sarjan.
Student Branch comp.
Student Total Marks 89.0000.
Student Name Jay.
Student Branch comp.
Student Total Marks 77.0000.
Student Name Kunal.
Student Branch comp.
Student Total Marks 78.0000.
*/