/*count numbers of odd and even value into integer array.
1.create and intialize array as numbers.
2.create variable odd,evenand store 0 into it.
3.check value at 1st position is odd or even.
if(number%2==0)
even=even+1
else
odd=odd+1
5.check value at 3rd position is odd or even.
if(number%2==0)
even=even+1
else
odd=odd+1
wirte code per steps.*/
#include<stdio.h>
void main()
{
    int a[2][2]={{4,5},{7,8}};
    int odd=0,even=0;
    int i;
    for(i=0;i<2;i++)
    {
        if(a[i][0]%2==0)
        even=even+1;
        else 
        odd=odd+1;
        if(a[i][1]%2==0)
        even=even+1;
        else
        odd=odd+1;

    }
    printf("number of even value is %d\n", even);
    printf("number of odd value is %d\n", odd);
}