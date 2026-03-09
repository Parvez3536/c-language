#include<stdio.h>
void main()
{
    int number,multiplier,answer;
    printf("enter number:");
    scanf("%d",&number);
    multiplier=1;
    while (multiplier<=10)

    {
    answer=number*multiplier;
    printf("%2d x %2d = %2d\n",number,multiplier,answer);
    multiplier++;
    }
    
}
