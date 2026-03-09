#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     main( int ac, char *av[] )
{
    if (ac != 4)
        return 1;
    int     w = atoi(av[1]), h = atoi(av[2]), iter = atoi(av[3]);
    if (w <= 0 || h <= 0 || iter < 0)
        return 1;
    // prepare grids
    int     grid[2][h + 2][w + 2];
    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y < h + 2; y++)
        {
            for (int x = 0; x < w + 2; x++)
                grid[i][y][x] = 0;
        }
    }
    // handle commands
    int     x = 1, y = 1, pen = 0;
    char    in;
    while (read(0, &in, 1) > 0)
    {
        if      (in == 'w' && y > 1) y--;
        else if (in == 's' && y < h) y++;
        else if (in == 'a' && x > 1) x--;
        else if (in == 'd' && x < w) x++;
        else if (in == 'x') pen = !pen;
        if (pen) grid[0][y][x] = 1;
    }
    // simulation
    for (int t = 0; t < iter; t++)
    {
        int     cur = t % 2, next = !cur;
        for (int y = 1; y <= h; y++)
        {
            for (int x = 1; x <= w; x++)
            {
                int     nb = 0;
                for (int c = 0; c < 9; c++)
                    nb += grid[cur][y + (c/3) - 1][x + (c%3) - 1];
                grid[next][y][x] = (nb == 3) | (nb == 4 && grid[cur][y][x]);
            }
        }
    }
    // display output
    for (int i=1; i<=h; i++)
    {
        for (int j=1; j<=w; j++)
        {
            putchar(grid[iter%2][i][j] ? '0' : 'X');
        }
        putchar('\n');
    }
    return 0;
}