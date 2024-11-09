#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter no. for array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array is :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    j=1;
    printf("\n");
    while(jn){
        printf("alternate odd index elements are :%d",arr[j]);
        j+=2;
    }
    return 0;
}