#include<stdio.h>
int main(){
    int i,n;
    printf("enter no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter no.s for array");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // for largest no. in array
    int a=0;
    for(i=0;i<n;i++){
        if(arr[i]>a){
            a=arr[i];
        }
        else{
            continue;
        }
    }
    printf("largest no. is %d \n",a);
    // for smallest no. in array
    int b=a;
    for(i=0;i<n;i++){
        if(arr[i]<b){
            b=arr[i];
        }
    }
    printf("smallest no. is %d",b);
    return 0;
}    


    