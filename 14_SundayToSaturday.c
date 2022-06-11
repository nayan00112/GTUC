#include<stdio.h>

int main(){
    int n;
    printf("Enter Any Number From 1 to 7: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thersday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalidite Inpute");
        break;
    }
    return 0;
}

// Output:_________________________________________________

// Enter Any Number From 1 to 7: 1
// Sunday

// Enter Any Number From 1 to 7: 0
// Invalidite Inpute

// Enter Any Number From 1 to 7: 6
// Friday