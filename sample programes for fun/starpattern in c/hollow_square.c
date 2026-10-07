#include <stdio.h>

void hollowsquare(int a , int b)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==1 || i==a)
            {
                printf("* ");
            }
            else
            {
                if (j==0 || j==(b-1))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
                
            }
        }
        printf("\n");
    }
    
}

int main() {
    int row ,column;
    printf("Enter rows of square.\n");
    scanf("%d",&row);
    printf("Enter column of square.\n");
    scanf("%d",&column);
    hollowsquare(row,column);
    return 0;
}