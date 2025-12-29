#include <stdio.h>
#define ll long long
ll memo[1000];
ll fib_memo(ll n)
{
    if (n <= 1)
    {
        memo[n] = n;
        return n;
    }
    else
    {
        if (memo[n - 2] == -1)
            memo[n - 2] = fib_memo(n - 2);
        if (memo[n - 1] == -1)
            memo[n - 1] = fib_memo(n - 1);
        return memo[n - 2] + memo[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 1000; i++)
        memo[i] = -1;

    printf("%lld\n", fib_memo(111));
    return 0;
}