#include <stdio.h>

// if the recursive call is the last processing statement. its called tail recursion.
// All operations are performed at calling time.
void fun(int n)
{
    if (n > 0)
    {
        printf("%d\t", n);
        fun(n - 1);
        fun(n - 1);
    }
}
int main()
{
    fun(3);
    return 0;
}