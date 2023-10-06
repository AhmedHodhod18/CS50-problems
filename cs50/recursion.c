#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n = get_int("Number: ");
    printf("%i\n", collatz(n));
}

int collatz(int n)
{
    // if n == 1 stop
    if (n == 1)
        return 0;
    // else if n is even repeat this process on n/2
    else if ((n % 2) == 0)
        return 1 + collatz(n / 2);
    // else if n is odd repeat this process on 3n + 1
    else
        return 1 + collatz(3 * n + 1);
}