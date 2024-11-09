#include<stdio.h>
int main(){
    int n,n1,n2,a;
    printf("enter limit for fibonacci :");
    scanf("%d",n);
    n1=0;
    n2=1;
    a=n1+n2;
    printf("%d,%d",n1,n2);
    for(int i=a;i<=n;i++){
        printf("%d",a);
        n1=n2;
        n2=a;
        a=n1+n2;
    }
    return 0;
}