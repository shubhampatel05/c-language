#include<stdio.h>
int main(){
    int i,j,rows=7;
    for(i=1;i<=rows;i++){
        for(j=1;j<45;j++){
            if(i==1&&((j<=19||j>=25)&&(j<=34||j==37||j==43)&&j!=8&&j!=9&&j!=17&&j!=18&&j!=20&&j!=26&&j!=27)){
                printf("*");
            }
            else if(i==2&&(j==1||j==10||j==19||j==25||j==31||j==37||j==43)){
                printf("*");   
            }
            else if(i==3&&(j==1||j==10||j==19||j==25||j==31||j==37||j==43)){
                printf("*");   
            }
            else if(i==4&&(j>=10&&j<=16||j==1||j==19||j==25||j==31||j==37||j==43)){
                printf("*");   
            }
            else if(i==5&&(j==1||j==16||j==20||j==24||j==31||j==37||j==43)&&j!=10){
                printf("*");   
            }
            else if(i==6&&(j==1||j==16||j==21||j==23||j==31||j==37||j==43)&&j!=10){
                printf("*");   
            }
            else if(i==7&&(j<=7||j==22||j==31||(j>=10&&j<=16)||(j>=38&&j<=42))){
                printf("*");   
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}