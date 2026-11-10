#include<stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("SIMPLE CALCULATOR\n");

    printf("Enter two numbers : ");
    scanf(" %d",&num1);
    scanf(" %d",&num2);

    printf("Enter the operator : ");
    scanf(" %c",&operator);

    switch(operator)
    {
        case '+' : printf("Addition : %d\n", num1 + num2);break;
        case '-' : printf("Subtraction : %d\n", num1 - num2);break;
        case '*' : printf("Multiplication : %d\n", num1 * num2);break;
        case '/' :  if(num2 != 0)
                    {
                        printf("Division : %.2f\n", (float)num1 / num2);
                    }
                    else
                    {
                        printf("Invalid Denominator");
                    }
                    break;
        default : printf("Invalid Operator\n");
        return 0;
    }

}
