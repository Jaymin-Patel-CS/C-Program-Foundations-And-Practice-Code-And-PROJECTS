#include <stdio.h>

void diamond (int a)
{
    for (int i = 1; i <= a; i++) // for rows
    {
        for (int j = 0; j < a-i; j++) // for starting spaces.
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++) // for stars.
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = a; i > 0 ; i--) // rows
    {
        for (int j = 0; j < a-i+1; j++) // for spaces
        {
            printf(" ");
        }
        for (int j = 0; j < i-1 ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

int main() {
    int a;
    printf("Enter your number.\n");
    scanf("%d",&a);
    diamond(a);
    return 0;
}