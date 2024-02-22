#include <stdio.h>

int sum(int n){
    return n > 0 ? n + sum(n-1) : 0;
}

void main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num < 0)
        printf("Error!");
    else
        printf("Sum of naturla numbers till %d is %d",num ,sum(num));
}