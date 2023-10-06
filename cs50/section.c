#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int n = get_int("what's your age? ");
    long ph = get_long("what's your phone number? ");

    printf("Your name is %s\n", name);
    printf("Your Age is %i\n", n);
    printf("Your Phone Number is %li\n", ph);
}
