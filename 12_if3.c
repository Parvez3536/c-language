/*write a program to find the frame is portrait,landscape,spuare upon its width and height
*/
#include<stdio.h>
void main()

{
    int lenght,width;
    printf("enter lenght:");
    scanf("%d",&lenght);
    printf("enter width:");
    scanf("%d",&width);
    if(lenght>width)
    printf("the shape is portrait");
    if(width>lenght)
    printf("the shape is landscape");
    if(width==lenght)
    printf("the shape is square");
    
}