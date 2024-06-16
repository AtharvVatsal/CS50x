#include <stdio.h>

void meow(int n);

int main()
{
    int n;
    printf("Enter The Number of Iterartions: ");
    scanf("%d", &n);
    meow(n);
    return 0;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
