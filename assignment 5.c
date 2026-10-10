#include<stdio.h>
int main(){
    int a;
    int b;
    float average;
    printf("enter two integers:");
    scanf("%d %d",&a,&b);
    average=(float)(a+b)/2;
    printf("average=%.2f",average);
    return 0;
}
