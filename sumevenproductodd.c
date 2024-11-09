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
    int sum=0;
    int product=1;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
        else{
            product*=arr[i];
        }
    }
    printf("sum is %d \n",sum);
    printf("product is %d",product);
    return 0;
}    