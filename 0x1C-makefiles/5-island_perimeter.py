#!/usr/bin/python3
""" This is an island measuring function """


def island_perimeter(grid):
    """ Returns the perimeter of the island.
    The grid repr.. land by 1 and water by 0

    grid(list): List of list of integers repre.. an island
    """
    rows = len(grid)
    cols = len(grid[0])

    perimeter = 0
    for x in range(rows):
        for y in range(cols):
            if grid[x][y] == 1:
                perimeter += 4  # Add 4 to perimeter for each land cell
                if x > 0 and grid[x-1][y] == 1:
                    perimeter -= 2  # remove 2 if there is a land cell above
                if y > 0 and grid[x][y-1] == 1:
                    perimeter -= 2  # remove 2 if there is a land cell to left

    return perimeter
