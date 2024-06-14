#include <stdio.h>

int main() {
    int x, y;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    if (x > y)
    {
        printf("X is greater than Y. ");
    } else if (x < y)
    {
        printf("Y is greater than X. ");
    } else {
        printf("X and Y are equal ");
    }
    
    return 0;
}