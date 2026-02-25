#include<stdio.h>
void main()
{
    int a,b;
    printf("ener value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    a+=b;
    printf("\n a is:%d",a);
    a-=b;
    printf("\n a is:%d",a);
    a*=b;
    printf("\n a is:%d",a);
    a/=b;
    printf("\n a is:%d",a);

}