/*write a program to do addition, subtraction, division, multiplication*/
#include<stdio.h>

int main()
{
    int num1, num2, choice;
    float result;
    
    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);
    
    printf("\n1. Sum\n2. Subtraction\n3. Division\n4. Multiplication");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            if (num2 == 0)
            {
                printf("\nError! Division by zero is not allowed.\n");
                return 0;
            }
            result = (float)num1 / num2;
            break;
        case 4:
            result = num1 * num2;
            break;
        default:
            printf("\nInvalid choice\n");
            return 0;
    }
    
    if (choice >= 1 && choice <= 4)
    {
        printf("\nResult = %.2f\n", result);
    }
    
    return 0;
}