#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            if(b!=0)
                printf("%d / %d = %f",a,b,(float)a/b);
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator.");
    }
    return 0;
}