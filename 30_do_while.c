/*write  program to print the odd numbers from 1 to 10*/
#include<stdio.h>
void main()
{
    int i=1;
    do
    {
        if(i%2!=0)
        {
            printf(" this number is odd:%d\n",i);
        }
        else
        {
            printf(" this number is even:%d\n",i);
        }
        i++;
    }while(i<=10);
}