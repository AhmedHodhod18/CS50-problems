#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt the user for their name
    string name = get_string("What's your name? ");
    // print hello, the user name
    printf("hello, %s\n", name);
}