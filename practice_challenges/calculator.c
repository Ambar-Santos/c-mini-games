// Enhanced Calculator - FIXED VERSION
#include <stdio.h>
#include <math.h>
#include <string.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    // Variables
    double num1, num2, result;
    char operator[10];
    char continue_calc = 'y';

    // Main Program
    printf("=== ENHANCED C CALCULATOR ===\n");
    printf("Supports: +, -, *, /, pow, sqrt, log\n");

    while(continue_calc == 'y' || continue_calc == 'Y') {
        printf("\nEnter operation (e.g., 5 + 8 or sqrt 25): ");

        // Handling different input types
        if(scanf("%lf %s %lf", &num1, operator, &num2) == 3) {
            // Two number operations
            if(strcmp(operator, "+") == 0) result = add(num1, num2);
            else if(strcmp(operator, "-") == 0) result = subtract(num1, num2);
            else if(strcmp(operator, "*") == 0) result = multiply(num1, num2);
            else if(strcmp(operator, "/") == 0) {
                if(num2 != 0) {
                    result = divide(num1, num2);
                } else {
                    printf("Error: Division by zero is not valid!\n");
                    continue;
                }
            }
            else if(strcmp(operator, "pow") == 0) result = pow(num1, num2);
            else {
                printf("Error: Unknown operator '%s'\n", operator);
                continue;
            }
        }
        else {
            // Single-number operations (like sqrt)
            // Reset the input first
            scanf("%s %lf", operator, &num1);
            
            if(strcmp(operator, "sqrt") == 0) {
                if(num1 >= 0) {
                    result = sqrt(num1);
                } else {
                    printf("Error: Cannot square root negative number!\n");
                    continue;
                }
            }
            else if(strcmp(operator, "log") == 0) {
                if(num1 > 0) {
                    result = log(num1);
                } else {
                    printf("Error: Logarithm requires a positive number!\n");
                    continue;
                }
            }
            else {
                printf("Error: Invalid operation format!\n");
                continue;
            }
        }

        printf("Result: %.2f\n", result);

        printf("\nAnother calculation? (y/n): ");
        scanf(" %c", &continue_calc); // Space before %c to skip whitespace
    }

    printf("\n=== Calculator session ended ===\n");
    return 0;
}

// Function definitions 
double add(double a, double b) {
    return a + b; 
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b; 
}