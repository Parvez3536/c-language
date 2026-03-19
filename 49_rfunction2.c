/*write a program with return value without arguments*/
#include <stdio.h>
int getpi()
{
    int pi=11;
    return pi;
}
void main()
{
    int radius,area,pi;
    printf("enter radius:");
    scanf("%d",&radius);
    pi=getpi();
    area=pi*radius*radius;
    printf("the area of the circle is %d",area);
}   