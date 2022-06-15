//New Easy Method:(Output are remain same.)
#include <stdio.h>

int main() {
    int a, r=0;
    printf("Enter Value: ");
    scanf("%d",&a);

    if(a != 0){
    for(int i=2; i < a; i++){
        if(a%i == 0){
          r = 1;
          break;
        }
    }
    (r==1)?(printf("Non Prime")):(printf("Prime"));
    }
    else{
        printf("nither prime nor non prime");
    }
    
    return 0;
}

// Old Method:-------------------------------------------------
// #include <stdio.h>

// int main()
// {
//     int a, tem = 0;
//     printf("Enter Integer Number: ");
//     scanf("%d", &a);

//     if (a % 2 == 0)
//     {
//         if (a != 2)
//         {
//             printf("Non Prime Number");
//         }
//         else
//         {
//             printf("Prime Number");
//         }
//     }

//     else
//     {
//         for (int i = 2; i < a; i++)
//         {
//             if (a % i == 0)
//             {
//                 tem = 1;
//                 break;
//             }
//         }
//         if (tem == 1)
//         {
//             printf("Non Prime Number");
//         }
//         else
//         {
//             printf("Prime Number");
//         }
//     }
//     return 0;
// }


// Output: __________________________________________-
/*
Enter Integer Number: 4
Non Prime Number

Enter Integer Number: 2
Prime Number

Enter Integer Number: 49
Non Prime Number

Enter Integer Number: 13
Prime Number
*/