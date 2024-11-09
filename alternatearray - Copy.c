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
    j=0;
    printf("\n");
    printf("alternate even index elements are :");
    while(j<n+1){
        printf("%d",arr[j]);
        j+=2;
    }
    return 0;
}    