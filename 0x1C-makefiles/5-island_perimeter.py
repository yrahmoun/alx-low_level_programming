#!/usr/bin/python3
""" Island Perimeter finder """

def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    row = len(grid[0]);
    col = len(grid);
    perimeter = 0;

    for i in range(col):
        for j in range(row):
            if (grid[i][j] == 1):
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == col - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == row - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
