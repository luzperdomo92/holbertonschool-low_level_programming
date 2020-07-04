#!/usr/bin/python3
""" Function to calculate the island perimetrer"""


def island_perimeter(grid):
    """ function to calcualte the perimetrer"""

    counter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if ((j + 1) == len(grid[i]) or (grid[i][j + 1] == 0)):
                    counter += 1
                if ((j - 1) < 0 or (grid[i][j - 1] == 0)):
                    counter += 1
                if ((i + 1) == len(grid) or (grid[i + 1][j] == 0)):
                    counter += 1
                if ((i - 1) < 0 or (grid[i - 1][j] == 0)):
                    counter += 1
    return counter
