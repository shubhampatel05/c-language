#include<stdio.h>
int main(){
    int i,j,n,p;
    printf("enter row :");
    scanf("%d",&n);
    printf("enter column :");
    scanf("%d",&p);
    int arr[n][p];
    printf("enter no.s for array");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        
    }
    // for row sum
    for(i=0;i<n;i++){
        int rowsum=0;
        for(j=0;j<n;j++){
            rowsum+=arr[i][j];
        }
        printf("\nsum of row %d is %d \n",i+1,rowsum);
        
    }
    // for column sum
    for(i=0;i<n;i++){
        int columnsum=0;
        for(j=0;j<n;j++){
            columnsum+=arr[j][i];
        }
        printf("sum of column %d is %d \n",i+1,columnsum);
        
    }
    return 0;
}