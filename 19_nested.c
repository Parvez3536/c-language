#include<stdio.h>
void main()
{
    int month_number;
    printf("enter month number:");
    scanf("%d",&month_number);
    if (month_number>=1 && month_number<=12)

    {
        if(month_number==1)
    printf("this is one");
    if(month_number==2)
    printf("this is two");
    if(month_number==3)
    printf("this is three");
    if(month_number==4)
    printf("this is four");
    if(month_number==5)
    printf("this is five");
    if(month_number==6)
    printf("this is six");
    if(month_number==7)
    printf("this is seven");
    if(month_number==8)
    printf("this is eight");
    if(month_number==9)
    printf("this is nine");
    if(month_number==10)
    printf("this is ten");
    if(month_number>10)
    printf("please enter valid number");
    }
    
}