#include<stdio.h>
int main(){
    int n ;
    printf("enter no.:");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        int p=n*i;
        printf("%d*%d=%d\n",n,i,p);
    }
    return 0;
}