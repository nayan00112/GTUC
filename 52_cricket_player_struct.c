/*
52. Define a structure called cricket that will describe the following information:
Player name
Team name
Batting average
Using cricket, declare an array player with 50 elements and write a C program to read the
information about all the 50 players and print team wise list containing names of players
with their batting average.
*/

#include <stdio.h>

struct cricket
{
    char pn[30]; // Player name
    char tn[15]; // Team name
    float ba;    // Batting average
};

int main()
{
    struct cricket cr[50];
    int x = 50; //number of player

    for (int i = 0; i < x; i++)
    {
        printf("Enter Player name: ", i + 1);
        gets(cr[i].pn);
        printf("Enter Team name: ");
        gets(cr[i].tn);
        printf("Enter Batting average: ");
        scanf("%f", &cr[i].ba);
        getchar();
        printf("\n");
    }

    for (int j = 0; j < x; j++)
    {
        printf("Player name:");
        puts(cr[j].pn);
        printf("Team name: ");
        puts(cr[j].tn);
        printf("Batting average %.2f\n", cr[j].ba);
        printf("\n");
    }

    return 0;
}


/*
Output:

Enter Player name: sahil
Enter Team name: super
Enter Batting average: 93.2

Enter Player name: saurabh
Enter Team name: smart
Enter Batting average: 92.43

Enter Player name: hiren
Enter Team name: heroy
Enter Batting average: 93.31
.
.
.
.
.
.



Player name:sahil
Team name: super
Batting average 93.20

Player name:saurabh
Team name: smart
Batting average 92.43

Player name:hiren
Team name: heroy
Batting average 93.31
.
.
.
.
.
.


*/