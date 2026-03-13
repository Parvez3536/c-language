#include <stdio.h>
void main()
{
    int age[5];
    int position;
    for (position=0;position<=4;position++)
    {
        printf("Enter the age of student %d: ",position+1);
        scanf("%d",&age[position]);
    }
    for (position=0;position<=4;position++)
    {
        printf("The age of student %d is: %d \n",position+1,age[position]);
    }
}