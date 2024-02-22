#include <stdio.h>

void main(){
    int x,y,z;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&x ,&y ,&z);
    printf("%d is the largest",(x > y ? (x > z ? x : z) : (y > z ? y : z)));
}