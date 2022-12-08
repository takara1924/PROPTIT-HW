#include <stdio.h>
typedef long long ll;


int main()
{
    ll n,k; scanf("%lld %lld", &n, &k);

    ll ans = n;

    while(n)
    {
        ans += n/k;
        n /= k;
    }

    printf("%lld", ans);

}