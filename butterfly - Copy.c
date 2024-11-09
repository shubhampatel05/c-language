#include<stdio.h>
int main(){
    int a=5,i,j;
    char star='*';
    for (i=1;i<a;i++){
        int space=a-i;
        for(j=1;j<space;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",star);
            if(j<i){printf(" ");
        }
        }
        for(j=1;j<(2*(space));j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",star);
            printf(" ");
        
        }
        printf("\n");
    }
    for (i=a;i>1;i--){
        int space=5-i;
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%c",star);
            printf(" ");
        }
        for(j=1;j<=(2*(space));j++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%c",star);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
