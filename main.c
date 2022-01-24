#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    double num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+') {
        printf("Equal: %0.2lf\n", num1 + num2);
    }
    else if(op == '-') {
        printf("Equal: %0.2lf\n", num1 - num2);
    }
    else if(op == '*') {
        printf("Equal: %0.2lf\n", num1 * num2);
    }
    else if(op == '/') {
        printf("Equal: %0.2lf\n", num1 / num2);
    }
    else {
        printf("Invalid Operator! Please check!\n");
    }
    return 0;
}