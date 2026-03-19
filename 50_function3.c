/*exmaple square of number
with return value and with arguments*/
#include <stdio.h>
int getsquare(int n)
{
    return n*n;
}
void main()
{
    int n,sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    sq =getsquare(n);
    printf("square=%d",sq);
}