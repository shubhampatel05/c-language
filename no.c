#include<stdio.h>
int main(){
    int no_s=5,b=1,i,j,k;
    for (i=1;i<=no_s;i++){
        int space=6-i;
        for(j=1;j<space;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",b);
            for(k=1;k<=1;k++){
                printf(" ");
            }
        }

        b++;
        printf("\n");     
    }
    return 0;
}