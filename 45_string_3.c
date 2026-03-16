#include<stdio.h>
void main()
{
    char name[32],address[512];
    printf("enter your name:");
    scanf("%s",name);
    fflush(stdin);
    printf("enter your address:");
    gets(address);
    printf("your name is: %s\n",name);
    printf("your address is: %s",address);  
    puts("address");
}