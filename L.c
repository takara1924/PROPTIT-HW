#include <stdio.h>
typedef long long ll;

#define M 30000

int main()
{
    ll n;
    scanf("%lld", &n);

    ll a2 = 0, a5 = 0;

    ll k = 1;

    for(ll m = 2; m <= n; m++)
    {
        int i = m;
        while( !(i % 2) )
        {
            a2 ++;
            i /= 2;
        }

        while(i % 5 == 0)
        {
            a5++;
            i /= 5;
        }
        k = (k * i) % 10;
    }

    a2 -= a5;

    while(a2--)
        k = (k * 2) % 10;

    printf("%d", k);

}