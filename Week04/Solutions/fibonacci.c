#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int num = get_int("number: ");

    printf("The n=%i fibonacci number is %i\n", num, fib(num));
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
