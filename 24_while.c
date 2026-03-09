#include<stdio.h>
void main()
{
    int number,facrorial=1;
    printf("enter number:");
    scanf("%d",&number);
    while (number>0)
    {
        facrorial=facrorial*number;
        number--;
    }
    printf("factorial=%d",facrorial);   
}