/*write a program to checkout the given letter is vovel or not
make a variable of letter
accept one letter from user.
check the letter vovel or not
if letter==a then
prinf("this letter is vowel);
if letter==e then
prinf("this letter is vowel);
if letter==i then
prinf("this letter is vowel);
if letter==o then
prinf("this letter is vowel);
if letter==u then
prinf("this letter is vowel);
otherwise
it is not a vowel
*/
#include<stdio.h>
void main()
{
    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':
    case 'A':
        printf("this letter is vowel");
        break;
    case 'e':
    case 'E':
        printf("this letter is vowel");
        break;
    case 'i':
    case 'I':
        printf("this letter is vowel");
        break;
    case 'o':
    case 'O':
        printf("this letter is vowel");
        break;
    case 'u':
    case 'U':
        printf("this letter is vowel");
        break;
    
    default:
        printf("this letter is not a vowel");
        break;
    }
    
}