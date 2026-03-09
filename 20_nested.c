#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("1.addition 2.subtraction 3.multiplication 4.division:");
    printf("enter your choice:");
    scanf("%d",&choice);
    if (choice>=1&&choice<=9)
    {
     switch (choice)
     {
     case 1:
        result=num1+num2;
        printf("result=%f",result);
        break;
     case 2:
        result=num1-num2;
        printf("result=%f",result);
        break;
     case 3:
        result=num1*num2;
        printf("result=%f",result);
        break;
     case 4:
        if(num2!=0)
        {
            result=(float)num1/num2;
            printf("result=%f",result);
        }
        else
        {
            printf("error: division by zero is not allowed");
        }           
        break;
     
     default:
        break;
     }
    }
    

    
}
    