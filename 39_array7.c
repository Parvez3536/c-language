#include<stdio.h>
void main()
{
    int a[2][2]={{2,4},{3,5}};
    int sum=0;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum is: %d", sum
    );

}