#include <stdio.h>

void toh(int n, int A, int B, int C)
{
    if (n > 0)
    {
        toh(n - 1, A, C, B);
        printf("From %d to %d\n", A, B);
        toh(n - 1, C, B, A);
    }
}

int f(int &x, int c)

{
    c = c - 1;

    if (c == 0)
        return 1;

    x = x + 1;

    return f(x, c) * x;
}

// 5

int fun(int n)

{

    int x = 1, k;

    if (n == 1)
        return x;

    for (k = 1; k < n; ++k)

        x = x + fun(k) * fun(n - k);

    return x;
}

void count(int n)

{

    static int d = 1;

    printf("%d", n);

    printf("%d", d);

    d++;

    if (n > 1)
        count(n - 1);

    printf("%d", d);
}

int main()

{

    count(3);
}

// int main()
// {
//     int n;
//     // scanf("%d", &n);
//     // toh(n, 1, 2, 3);
//     // int* p = 5;
//     int p = 5;
//     // int *a = &p;
//     printf("%d", fun(5));
//     return 0;
// }