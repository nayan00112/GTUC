/*
Define a structure type struct personal that would contain person name, date of joining
and salary using this structure to read this information of 5 people and print the same on
screen.
*/

#include <stdio.h>

struct personal
{
    char name[30];
    char doj[15];
    float salary;
};

int main()
{
    struct personal per[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d persion name: ", i + 1);
        gets(per[i].name);
        printf("Enter persiom's date of joining: ");
        gets(per[i].doj);
        printf("Enter persion's salary");
        scanf("%f", &per[i].salary);
        getchar();
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Persion %d data: ", j + 1);
        printf("\npersion name: ");
        puts(per[j].name);
        printf("date of joining: ");
        puts(per[j].doj);
        printf("salary is %.2f\n", per[j].salary);
        printf("\n");
    }

    return 0;
}

/*
Output:

Enter 1 persion name: Rajubhai
Enter persiom's date of joining: 12-04-2002
Enter persion's salary120000

Enter 2 persion name: Manojkumar
Enter persiom's date of joining: 22-04-2002
Enter persion's salary122000

Enter 3 persion name: Kunalsing
Enter persiom's date of joining: 11-08-2005
Enter persion's salary87000

Enter 4 persion name: Jayeshbhai
Enter persiom's date of joining: 11-02-2007
Enter persion's salary46000

Enter 5 persion name: Mohanbhai
Enter persiom's date of joining: 21-08-2007
Enter persion's salary89000

Persion 1 data:
persion name: Rajubhai
date of joining: 12-04-2002
salary is 120000.00

Persion 2 data:
persion name: Manojkumar
date of joining: 22-04-2002
salary is 122000.00

Persion 3 data:
persion name: Kunalsing
date of joining: 11-08-2005
salary is 87000.00

Persion 4 data:
persion name: Jayeshbhai
date of joining: 11-02-2007
salary is 46000.00

Persion 5 data:
persion name: Mohanbhai
date of joining: 21-08-2007
salary is 89000.00

*/