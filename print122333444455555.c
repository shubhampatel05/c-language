#include<stdio.h>
int main(){
    int no_s=5,i,j,k;
    for (i=1;i<=no_s;i++){
        int space=6-i;
        for(j=1;j<space;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");     
    }
    return 0;
}