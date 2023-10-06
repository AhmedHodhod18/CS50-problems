#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);

int main (void)
{
    candidate candidates_array[3];
    for (int i = 0; i < 3; i++)
    {
        candidates_array[i] = get_candidate("Enter a new candidate: ");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Candidate %d:\n", i + 1);
        printf("Name: %s\n", candidates_array[i].name);
        printf("Votes: %d\n", candidates_array[i].votes);
        printf("\n");
    }
}

candidate get_candidate(string prompt)
{
    printf("%s\n", prompt);

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_float("Enter a number of votes: ");

    return c;

}