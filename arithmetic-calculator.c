#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void displayMenu() {
    printf("\n=== Calculator ===\n");
    printf("1: Calculation\n");
    printf("2: Trigonometry\n");
    printf("3: Exponential\n");
    printf("4: Logarithm\n");
    printf("0: Exit\n");
    printf("Select an option: ");
}

void funct1() {
    float num1, num2, result;
    char expression;
    printf("\n=== Calculation ===\n");
    printf("Enter number: ");
    scanf("%f", &num1);
    printf("Enter expression (+, -, *, /): ");
    scanf(" %c", &expression);
    while (1) {
        printf("Enter number: ");
        scanf("%f", &num2);
        switch (expression) {
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
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid expression.\n");
                break;
        }
        num1 = result;
        printf("\nPress enter to continue...");
        getchar();
        getchar();
        clearScreen();
        printf("\n=== Calculation ===\n");
        printf("Result: %.3f\n", result);
        printf("NOTE: Enter 0 to exit...\n");
        printf("Enter expression (+, -, *, /, 0): ");
        scanf(" %c", &expression);
        if (expression == 48) {
            break;
        }
    }
}

void funct2() {
    while (1) {
        int exp2;
        printf("\n=== Trigonometry ===\n");
        printf("1: sin\t\t2: cos\t\t3: tan\n");
        printf("4: sinh\t\t5: cosh\t\t6: tanh\n");
        printf("7: arcsin\t8: arccos\t9: arctan\n");
        printf("0: Return to main menu\n");
        printf("Select an option: ");
        scanf("%d", &exp2);
        if (exp2 == 0) {
            break;
        }
        float num;
        printf("Enter angle in radians: ");
        scanf("%f", &num);
        switch (exp2) {
            case 1:
                printf("Result: %f\n", sin(num));
                break;
            case 2:
                printf("Result: %f\n", cos(num));
                break;
            case 3:
                printf("Result: %f\n", tan(num));
                break;
            case 4:
                printf("Result: %f\n", sinh(num));
                break;
            case 5:
                printf("Result: %f\n", cosh(num));
                break;
            case 6:
                printf("Result: %f\n", tanh(num));
                break;
            case 7:
                printf("Result: %f\n", asin(num));
                break;
            case 8:
                printf("Result: %f\n", acos(num));
                break;
            case 9:
                printf("Result: %f\n", atan(num));
                break;
            default:
                printf("Error: Invalid option.\n");
                break;
        }
        printf("\nPress enter to continue...");
        getchar();
        getchar();
        clearScreen();
    }
}

void funct3() {
    while (1) {
        float num, power;
        printf("\n=== Exponential ===\n");
        printf("Enter number: ");
        scanf("%f", &num);
        printf("Enter exponent: ");
        scanf("%f", &power);
        printf("Result: %f\n", pow(num, power));
        printf("\nPress enter to continue...");
        getchar();
        getchar();
        clearScreen();
    }
}

void funct4() {
    while (1) {
        int opt;
        float num;
        printf("\n=== Logarithm ===\n");
        printf("1: base-e\t2: base-10\n");
        printf("0: Return to main menu\n");
        printf("Select an option: ");
        scanf("%d", &opt);
        if (opt == 0) {
            break;
        }
        printf("Enter number: ");
        scanf("%f", &num);
        if (opt == 1) {
            printf("Result: %f\n", log(num));
        } else if (opt == 2) {
            printf("Result: %f\n", log10(num));
        } else {
            printf("Error: Invalid option.\n");
        }
        printf("\nPress enter to continue...");
        getchar();
        getchar();
        clearScreen();
    }
}

int main() {
    while (1) {
        int option;
        displayMenu();
        scanf("%d", &option);
        clearScreen();
        switch (option) {
            case 1:
                funct1();
                break;
            case 2:
                funct2();
                break;
            case 3:
                funct3();
                break;
            case 4:
                funct4();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Error: Invalid input!\n");
                break;
        }
        printf("\nReturning to the main menu...");
        getchar();
        getchar();
        clearScreen();
    }
    return 0;
}
