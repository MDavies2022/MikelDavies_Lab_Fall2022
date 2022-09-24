#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
    int num = get_int("number: ");

    printf("factorial of %i is %i\n", num, factorial(num));
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return(n * factorial(n-1));
}
