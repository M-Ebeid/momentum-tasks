#include <stdio.h>

void main () {
    int num,bit;
    printf("Enter a numer : ");
    scanf("%d",&num);
    printf("Enter the bit to be cleared : ");
    scanf("%d",&bit);
    num &= ~(1<<bit);
    printf("The number after clearing the bit number %d is %d",bit,num);
}