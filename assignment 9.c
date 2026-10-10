#include<stdio.h>
int main () {
    int num;
    printf("enter the value of num");
    scanf("%d",&num);
    num--;
    if (num <=0) {
        printf("value is 0 or negative");
    }
    return 0;
}


