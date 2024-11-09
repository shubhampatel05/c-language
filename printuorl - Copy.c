#include<stdio.h>
int main(){
    char var;
    printf("enter char to check:");
    scanf("%c",&var);
    if (var>='a' && var<='z'){
        printf("lowercase");
    }
    else if(var>='A' && var<='Z'){
        printf("uppercase");
    }
    else{
        printf("char but not uppercase or lowercase");
    }
    return 0;
}    