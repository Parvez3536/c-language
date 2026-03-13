/*sum of given array number*/
#include<stdio.h>
void main()
{
    int num[5]={5,6,7,8,9};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    printf("The sum of given array number is: %d",sum);
}