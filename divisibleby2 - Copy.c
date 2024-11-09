#include<stdio.h>
int main(){
    int n ;
    printf("enter no.:");
    scanf("%d",&n);
    if (n%2==0){
        printf("%d is divisible by 2",n);
    }
    else{
        printf("not divisible by 2");
    }
    return 0;
}