    int n;
    do
    {
        // prompt the Height from the user
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
        // The row #
    for (int s = 0; s < n; s++)
    {
        for (int i = 0; i < n-s; i++)
        {
            //print appropriate spaces
            printf(" ");
        }
        for (int x = 0; x < (s+2); x++)
        {
            //print appropriate #s
            printf("#");
        }
        //new line
        printf("\n");
    }