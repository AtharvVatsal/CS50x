#include <stdio.h>
#include <math.h>

float add(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);
float mod(float x, float y);

int main() {
    float x, y;
    char choice;
    printf("Enter Value of X: ");
    scanf("%f", &x);
    printf("Enter Value of Y: ");
    scanf("%f", &y);
    printf("+ for addition\n- for subtraction\n* for multiplication\n/ for division\n%% for remainder\n");
    scanf(" %c", &choice); // Note the space before %c to consume any trailing newline
    switch (choice) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", x, y, add(x,y));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", x, y, sub(x,y));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", x, y, mul(x,y));
            break;
        case '/':
            if (y != 0) {
                printf("%.2f / %.2f = %.2f\n", x, y, div(x,y));
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)y != 0) {
                printf("%.2f %% %.2f = %.2f\n", x, y, mod(x,y));
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("INVALID INPUT\nRE-RUN CODE!\n");
            break;
    }
    return 0;
}

float add(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mul(float x, float y) {
    return x * y;
}

float div(float x, float y) {
    return x / y;
}

float mod(float x, float y) {
    // Using fmod function for floating point modulus (From math.h module)
    return fmod(x, y);
}
