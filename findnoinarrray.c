#include<stdio.h>
int main(){
    int i,find,n;
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
    printf("enter no. to find in array :");
    scanf("%d",&find);
    for(i=0;i<n;i++){
        if(find==arr[i]){
            printf("found your no. : %d\n",arr[i]);
            printf("it's position is : %d",i+1);
        }
        else{
            continue;
        }
    }
    return 0;
}    