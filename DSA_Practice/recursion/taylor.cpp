#include <stdio.h>
// using namespace std;

// To represent e^x, we ll use recursion to achieve the same result.
double e_rec(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = e_rec(x, n - 1);
        p = p * x;
        f = f * n;
        return r + (p / f);
    }
}

double e_iter(double x, double n)
{
    double s = 1.0;
    for (; n > 0; n--)
    {
        s = 1 + (x / n) * s;
    }
    return s;
}

double e_rec_fast(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + (x * s / n);
    return e_rec_fast(x, n - 1);
}

int main()
{
    int x = 4, n = 5;
    // scanf("%d %d", &x, &n);
    printf("%lf\n", e_rec(5, 25));
    printf("%lf\n", e_iter(5, 25));
    printf("%lf\n", e_rec_fast(5, 25));
    return 0;
}