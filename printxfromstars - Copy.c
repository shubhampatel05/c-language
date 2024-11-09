#include<stdio.h>
int main(){
    int i,j,a;
    printf("enter no. of stars:");
    scanf("%d",&a);
    char star='*';
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==j){
                printf("%c",star);
            }
            else if(i+j==a+1){
                printf("%c",star);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}