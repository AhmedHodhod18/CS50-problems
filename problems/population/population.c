#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int i;
    do
    {
        i = get_int("Start Size: ");
    }
    while (i < 9);
    // TODO: Prompt for end size

    int j;
    do
    {
        j = get_int("End Size: ");
    }
    while (j < i);


    // TODO: Calculate number of years until we reach threshold

    int y = 0;
    while (i < j)
    {
        i = i + (i / 3) - (i / 4);
        y++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", y);
}