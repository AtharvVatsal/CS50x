#include <stdio.h>

int main()
{
    int count;
    printf("Enter The Times You Want To Repeat The Loop: ");
    scanf("%d", &count);
    int n = 0;
    while (n < count)
    {
        printf("Meow\n");
        n++;
    }
    return 0;
}