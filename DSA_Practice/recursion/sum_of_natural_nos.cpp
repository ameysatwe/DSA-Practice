#include <stdio.h>

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{
    int r;
    r = factorial(5);
    printf("%d\n", r);
    return 0;
}
