#include<stdio.h>
int main(){
    int a,i,j;
    int b=1;
    printf("enter no. till you want to print :");
    scanf("%d",&a);
    while(b<=a){
        b++;
        if(b=1){
            printf("    %d    ",b);
        }
        else if(b=2){
            printf("   %d %d   ",b,b);
        }
        else if(b=3){
            printf("  %d %d %d  ",b,b,b);
        }
        else if(b=4){
            printf(" %d %d %d %d ",b,b,b,b);
        }
        else{
            printf("%d %d %d %d %d",b,b,b,b,b);
        }
    }
    return 0;
}