#include <stdio.h>
typedef long long ll;

#define M 30000

int main()
{
    //1 : susan ,0 : Alice
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);

        if(n == 1)
        {
            printf("Alice\n");
            continue;
        }

        if(n <= 3)
        {
            printf("Susan\n");
            continue;
        }

        int check = 1;
        if(n % 2 == 1)
        {
            n -= 1;
            check = 0;
        }

        int ans = 0;

        if(n % 4 == 0) ans = 1;
        else ans = 0;

        if(!check) ans = (ans+1) %2;
        
        (ans) ? printf("Alice\n") : printf("Susan\n");
        
    }



}