#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000007

int main()
{
    ll a,n;
    scanf("%lld %lld", &a, &n);

    ll ans = 1, temp = 1;

    for(ll i = 1; i <= n; i++)
    {
        temp = (temp * a) % M;
        ans = (ans + temp) % M;
    }

    printf("%lld", ans);

}