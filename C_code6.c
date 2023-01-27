#include <stdio.h>
#include <math.h>

void main() 
{
    double num1, num2, result;
    char operation;
  
    printf("Enter a number: ");   // input for the first number
    scanf("%lf", &num1); 

    printf("Enter an operation : +, -, *, /, s for sin, c for cos, t for tan, e for exponential\n(sine,cos and tan are calculated in radians)\n(for exponential, second number is taken as the power)\n =>");  // operation input by the user 
    scanf(" %c", &operation);
    
    if(operation== '+'||operation== '-'||operation== '/'||operation== '+'||operation=='*'||operation=='e')    //operations that require a second number
    {
      printf("Enter oprend number: ");
      scanf("%lf", &num2);
    }

    switch (operation)  // switch case used for each operation as input by user 
    {
        case '+':
        {
            result = num1 + num2;
            printf("%lf + %lf = %lf\n", num1, num2, result);
            break;
        }
        case '-':
        {
            result = num1 - num2;
            printf("%lf - %lf = %lf\n", num1, num2, result);
            break;
        }
        case '*':
        {
            result = num1 * num2;
            printf("%lf * %lf = %lf\n", num1, num2, result);
            break;
        }
        case '/':
        {
            if (num2 == 0) 
            {
                printf("Error: Cannot divide by zero\n");
            } 
            else 
            {
                result = num1 / num2;
                printf("%lf / %lf = %lf\n", num1, num2, result);
            }
            break;
        }
        case 's':
        {
            result = sin(num1);
            printf("sin(%lf) = %lf\n", num1, result);
            break;
        }
        case 'c':
        {
            result = cos(num1);
            printf("cos(%lf) = %lf\n", num1, result);
            break;
        }
        case 't':
        {
            result = tan(num1);
            printf("tan(%lf) = %lf\n", num1, result);
            break;
        }
        case 'e':
        {
            result = pow(num1, num2);
            printf("%lf ^ %lf = %lf\n", num1, num2, result);
            break;
        }
        default:
        {
            printf("Error: Invalid operator\n");
         }
    }
    
}
