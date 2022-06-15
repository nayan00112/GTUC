#include <stdio.h>

int main()
{
    int s[5][3];
    float r;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks of Student have Roll No. is %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Marks of Subject Code %d: ", j + 1);
            scanf("%d", &s[i][j]);
        }
    }

    printf("\n \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            r = r + (float)(s[i][j]);
        }
        printf("Average Marks of Student have Roll No. %d is %.2f.\n", i + 1, r / 3);
        r = 0;
    }

    return 0;
}

// Output:

/*
Enter Marks of Student have Roll No. is 1
Enter Marks of Subject Code 1: 98
Enter Marks of Subject Code 2: 99
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 2
Enter Marks of Subject Code 1: 80
Enter Marks of Subject Code 2: 90
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 3
Enter Marks of Subject Code 1: 87
Enter Marks of Subject Code 2: 78
Enter Marks of Subject Code 3: 89
Enter Marks of Student have Roll No. is 4
Enter Marks of Subject Code 1: 90
Enter Marks of Subject Code 2: 76
Enter Marks of Subject Code 3: 88
Enter Marks of Student have Roll No. is 5
Enter Marks of Subject Code 1: 79
Enter Marks of Subject Code 2: 78
Enter Marks of Subject Code 3: 98


Average Marks of Student have Roll No. 1 is 95.33.
Average Marks of Student have Roll No. 2 is 86.33.
Average Marks of Student have Roll No. 3 is 84.67.
Average Marks of Student have Roll No. 4 is 84.67.
Average Marks of Student have Roll No. 5 is 85.00.
*/






//---------------------------------------------------------------------------





/*

#include <stdio.h>

int main() {
    int a[5][3];
    float r = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j =0; j<3; j++){
            printf("Student %d subject %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 3; i++){
        for(int j =0; j<5; j++){
         r = r + a[j][i];
        }
        printf ("\n");
        printf("%d marks is %f\n", i+1, r);
        printf("average marks is %f\n", r/5);
      r = 0;  
    }
    return 0;
}

// Output:
// Student 1 subject 1: 80
// Student 1 subject 2: 90
// Student 1 subject 3: 88

// Student 2 subject 1: 78
// Student 2 subject 2: 89
// Student 2 subject 3: 97

// Student 3 subject 1: 78
// Student 3 subject 2: 77
// Student 3 subject 3: 78

// Student 4 subject 1: 90
// Student 4 subject 2: 99
// Student 4 subject 3: 98

// Student 5 subject 1: 98
// Student 5 subject 2: 82
// Student 5 subject 3: 83


// 1 marks is 424.000000
// average marks is 84.800003

// 2 marks is 437.000000
// average marks is 87.400002

// 3 marks is 444.000000
// average marks is 88.800003

*/