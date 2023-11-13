//
//  main.cpp
//  DSA_Practice
//
//  Created by Amey Satwe on 13/02/22.
//

#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}

int main(int argc, const char *argv[])
{
    // insert code here..
    cout << fun(5);
    return 0;
}
