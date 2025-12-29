#include <stdio.h>
using namespace std;

long long power(int m, int n)
{
    if (n == 0)
        return 1;

    return power(m, n - 1) * m;
}

int main()
{
    long long r = power(2, 33);
    printf("%lld", r);
}