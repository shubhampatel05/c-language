#include<stdio.h>
int main(){
    int i,p;
    p=0;
    i=1;
    while (i<11){
        p=p+i;
        i++;
    }
    printf("%d",p);
    return 0;
}