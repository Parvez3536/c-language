/*write a program to count numbers of characters wihout spacing*/
#include <stdio.h>
void main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
         {
            count++;
        }
    }

    printf("total Number of characters without space=%d\n",count);
}