#include <stdio.h>
#include <raylib.h>
#include "calculator.h"

static double currentNumber = 0.0;  
static double secondaryNumber = 0.0;
static char currentOperator = '\0';


void CalculatorInputDigit(int digit){
    currentNumber = (currentNumber * 10) + digit;

    printf("Current number: %.2f\n", currentNumber);

}

void CalculatorSetOperator(char op){
    currentOperator = op;

    printf("Current Operator: %c\n", currentOperator);


}






// int main(){

//     char op;
//     double num1;
//     double num2;
//     double resault;

//     printf("\n Enter an operator (+ - * /): ");
//     scanf("%c", &op);

//     printf("Enter number 1: ");
//     scanf("%lf", &num1);

//     printf("Enter number 2: ");
//     scanf("%lf", &num2);

//     switch(op){
//         case '+':
//             resault = num1 + num2;
//             printf("\nresault: %lf", resault);
//             break;
//         case '-':
//             resault = num1 - num2;
//             printf("\nresault: %lf", resault);
//             break;
//         case '*':
//             resault = num1 * num2;
//             printf("\nresault: %lf", resault);
//             break;
//         case '/':
//             resault = num1 / num2;
//             printf("\nresault: %.2lf", resault);
//             break;
        
//         default:
//             printf("%c is not valid", op);
//     }


//     return 0;
// }