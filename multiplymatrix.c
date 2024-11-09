#include<stdio.h>
int main(){
    int i,j,k;
    int A[3][3];
    printf("enter no. for matrix A :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("matrix is :");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        
    }
    printf("\n");
    int B[3][3];
    printf("enter no. for matrix B :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("matrix is :");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",B[i][j]);
        }
        
    }
    int C[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=0;
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\n");
    printf("result matrix is :");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        
    }
    return 0;
}