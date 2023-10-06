#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt the user for a starting numbers of llamas

    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // prompt the user for a goal number of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // add and abstract llamas every "year" until we reach the goal number of llamas
    // how many years will it take to get it goal
    //Every years, 1/3 of our llamas are born; 1/4 pass away

    int years = 0;
    while (start < end)
    {
        start += start / 12;
        // start = start + (start / 3) - (start / 4);
        years++;
    }

    printf("Years: %i\n", years);

    // print the number of years it took to reach the goal number of llamas

}