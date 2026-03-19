/*without return value&with argument function
example:print multification table*/
#include <stdio.h>
void printtable(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
}
void main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        printtable(n);
    }