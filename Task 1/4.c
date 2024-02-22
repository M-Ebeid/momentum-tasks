#include <stdio.h>

int fac(int n){
    return n > 1 ? n * fac(n-1) : 1;
}

void main () {
    int n;
    printf("Enter a numer : ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error");
    else if (n == 0)
        printf("0 is not odd nor even and its factorial is 1");
    else{
    n % 2 == 0 ? printf("%d is even",n) : printf("%d is odd",n);
    printf(" and its factorial is %d",fac(n));
    }
}