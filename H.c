#include <stdio.h>
typedef long long ll;

#define M 30000

int main()
{
    int n;
    scanf("%d", &n);

    int arr[M+5] = {1, 1};

    // int n = 0, m = 3;

    for(int i = 2; i * i <= M ;i++)
    {
        if(!arr[i]) for(int j = i*i; j <= M; j+= i) arr[j] = 1;
    }

    // printf("%d", arr[12]);
    
    for(int i = 2; i <= n; i++)
    {
        int check = 1;
        int k = i;

        while(k > 0)
        {
            if(arr[k])
            {
                check = 0; break;
            }

            k /= 10;
        }

        if(check) printf("%d ", i);
    }


}