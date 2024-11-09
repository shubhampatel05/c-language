#include<stdio.h>
int main(){
    int a=5,b=6,c=7,d;
    d=c;
    c=b;
    b=a;
    a=d;
    printf("after swapping a=%d\n,b=%d\n,c=%d",a,b,c);
    return 0;
}