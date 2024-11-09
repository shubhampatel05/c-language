#include<stdio.h>
int main(){
    int i,n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter no. for array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array is :");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    int counteven=0;
    int countodd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            counteven+=1;
        }
        else{
            countodd+=1;
        }
    }
    printf("no. of even element in array is %d",counteven);
    printf("no. of odd element in array is %d",countodd);
    return 0;
}