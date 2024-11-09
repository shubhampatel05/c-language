#include<stdio.h>
int main(){
    float num1,num2;
    char oprt;
    printf("enter numbers:");
    scanf("%f,%f",&num1,&num2);
    printf("enter operator:");
    scanf(" %c",&oprt);
switch(oprt)
{
    case '+':
    printf("%f+%f=%.2f",num1,num2=num1+num2);
    break;
    case '-':
    printf("%.2f-%.2f=%.2f",num1,num2=num1-num2);
    break;
    case '*':
    printf("%.2f*%.2f=%.2f",num1,num2=num1*num2);
    break;
    case '/':
    printf("%.2f/%.2f=%.2f",num1,num2=num1/num2);
    break;
    default:
    printf("operator error");
}    
    return 0;
}