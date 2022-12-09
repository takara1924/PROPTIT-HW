#include <stdio.h>
typedef long long ll;

#define M 30000

int main()
{
    
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);

        int arr[30];

        for(int i = 0; i < n; i++)
        {
            arr[i] = n-i -1;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                arr[j]--;
            }

            for(int i = 0; i < n; i++)
            {
                printf("%c", (arr[i] + 'a'));
            }
            for(int i = n-2; i >= 0; i--) printf("%c", 'a' + arr[i]);
            printf("\n");
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < n - i; j++) arr[j]++;

            for(int i = 0; i < n; i++)
            {
                printf("%c", (arr[i] + 'a'));
            }
            for(int i = n-2; i >= 0; i--) printf("%c", 'a' + arr[i]);
            printf("\n");
        }
        
    }



}