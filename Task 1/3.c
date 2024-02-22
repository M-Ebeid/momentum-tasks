#include <stdio.h>

void main () {
    float n1,n2;
    char op;
    printf("Enter first numer : ");
    scanf("%f",&n1);
    printf("Enter second number : ");
    scanf("%f",&n2);
    printf("Enter operation between (+ , - , * , /) : ");
    scanf(" %c",&op);
    switch (op){
    case '+':
        printf("Result = %.0f",n1+n2);
        break;
    case '-':
        printf("Result = %.0f",n1-n2);
        break;
    case '*':
        printf("Result = %.0f",n1*n2);
        break;
    case '/':
        printf("Result = %.2f",n1/n2);
        break;
    default:
    printf("Error!");
        break;
    }
}