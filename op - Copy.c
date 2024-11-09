#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter no's to evaluate:");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b && b>c || a>c && c>b){
        printf("largest no. is %d \n",a);
        if(b>c){
            printf("second largest no. is %d",b);
        }
        else{
            printf("second largest no. is %d",c);
        }
        
    } 
    else if (b>a && a>c || b>c && c>a){
        printf("largest no. is %d \n",b);
        if(a>c){
            printf("second largest no. is %d",a);
        }
        else{
            printf("second largest no. is %d",c);
        }
    }
    else if (c>a && a>b || c>b && b>a){
        printf("largest no. is %d \n",c);
        if(a>b){
            printf("second largest no. is %d",a);
        }
        else{
            printf("second largest no. is %d",b);
        }
    }
    return 0;
}