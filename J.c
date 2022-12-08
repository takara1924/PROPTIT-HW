#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j == 1 || j == i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    for(int i = 1; i <= 2*n -1 ; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i = n-1; i>=1; i--)
    {
        for(int m = 0; m < n + n-1 - i ; m++) printf(" ");

        for(int j = 1; j <= i; j++)
        {
            if(j == 1 || j == i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

}