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
    // for sum of array
    float sum=0;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum of the array is %.2 f \n",sum);
    // for average of array
    float avg=sum/n;
    printf("average is %.2f",avg);
    return 0;
}    