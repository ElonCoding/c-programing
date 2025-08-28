#include <stdio.h>

int main() {

    // Hence we have to take a big number so using double 
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Now using switch case 

        switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");          //since not divisiable by Zero
                return 1;
            }
            printf("Result: %f\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}