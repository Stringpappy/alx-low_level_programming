#!/usr/bin/python3
""" func that return the perimeter of san island """


def island_perimeter(grid):
    """return the perimeter of an island"""
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for x in range(height):
        for w in range(width):
            if grid[x][w] == 1:
                size += 1

                if (w > 0 and grid[x][w - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][w] == 1):
                    edges += 1
    return (size * 4) - (edges * 2)
