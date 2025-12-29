//
//  ncr.cpp
//
//
//  Created by Amey Satwe on 29/12/25.
//
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int ncr(int n, int r)
{
    int num, dem;

    num = fact(n);
    dem = fact(r) * fact(n - r);

    return num / dem;
}

int main()
{

    printf("%d \n", ncr(4, 2));
    return 0;
}
