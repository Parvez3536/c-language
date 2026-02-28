/*
*/
#include<stdio.h>
void main()
{
int price1,price2,weight1,weight2;
float price_per_gram_1,price_per_gram_2;
printf("enter price1:");
scanf("%d",&price1);
printf("enter weight1:");
scanf("%d",&weight1);
printf("enter price2");
scanf("%d",&price2);
printf("enter weight2:");
scanf("%d",&weight2);
price_per_gram_1=price1/weight1;
price_per_gram_2=price2/weight2;
if (price_per_gram_1<price_per_gram_2)

{
    printf("product 1 is cheaper");
}
else
{
    printf("product 2 is cheaper");

}



}
