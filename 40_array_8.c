#include<stdio.h>
void  main()
{
    int a[2][3]={{2,4,7},{3,5,9}};
    int sum=0;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum is: %d", sum);

}