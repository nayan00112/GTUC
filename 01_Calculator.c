#include <stdio.h>

void main() {
    int firstNumber, secondNumber, result;
    
    printf("Enter first number: \n");
    scanf("%d", &firstNumber);
    
    printf("Enter second number: \n");
    scanf("%d", &secondNumber);
    
    result = firstNumber + secondNumber;
    printf("\n%d + %d = %d", firstNumber, secondNumber, result);
    
    result = firstNumber - secondNumber;
    printf("\n%d - %d = %d", firstNumber, secondNumber, result);

    result = firstNumber * secondNumber;
    printf("\n%d * %d = %d", firstNumber, secondNumber, result);
    
    result = firstNumber / secondNumber;
    printf("\n%d / %d = %d", firstNumber, secondNumber, result);
    
}