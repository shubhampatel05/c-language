#include<stdio.h>
int main(){
    int a,i,fact;
    scanf("%d",&a);
    fact=1;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    return 0;
}