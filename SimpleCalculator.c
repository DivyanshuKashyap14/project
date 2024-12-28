#include<stdio.h>
int main(){
    int num1, num2, choice, result;
    printf("enter two numbers \n", num1, num2);
    scanf("%d%d",&num1,&num2);
    printf("enter your choice\n");
    printf("1.addition\n2.substraction\n3.multiplication\n4.division\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: result=num1+num2;
        break;
        case 2: result=num1-num2;
        break;
        case 3: result=num1*num2;
        break;
        case 4: result=num1/num2;
        break;
        default: printf("invalide choice");
    }
    printf(" the result is: %d", result);
    return 0;
}
