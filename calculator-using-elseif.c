#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num1;
    double num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator: ");
    scanf(" %c", &operator);

    if(operator == '+'){
        printf("%f\n", num1 + num2);
    }else if(operator == '-'){
        printf("%f\n", num1 - num2);
    }else if(operator == '/'){
        printf("%f\n", num1 / num2);
    }else if(operator == '*'){
        printf("%f\n", num1 * num2);
    }else{
        printf("error: invalid operator.\n+ for addition\n- for subtraction\n/ for division\n* for multiplication\n");
    }

    return 0;
}
