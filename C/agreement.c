#include <stdio.h>

int main() {
    char option;
    printf("Enter 'Y' To Agree, 'N' otherwise: ");
    scanf("%c", &option);
    if (option == 'y' || option == 'Y') {
        printf("Agreed\n");
    } else if (option == 'n' || option == 'N') {
        printf("Not Agreed\n");
    } else {
        printf("Invalid Choice\n");
    }
    return 0;
}