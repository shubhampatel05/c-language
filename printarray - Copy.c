#include<stdio.h>
int main(){
    int i,j,k;
    int arr[5];
    printf("enter no. for array");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    printf("array is");
    for(j=0;j<=4;j++){
        printf("%d\n",arr[j]);
    }
    printf("reverse array is");
    for(k=4;k>=0;k--){
        printf("%d\n",arr[k]);
    }
    return 0;
}