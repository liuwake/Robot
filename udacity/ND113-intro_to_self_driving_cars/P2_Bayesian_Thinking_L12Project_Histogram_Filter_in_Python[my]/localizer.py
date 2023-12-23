import pdb
from helpers import normalize, blur

def initialize_beliefs(grid):
    height = len(grid)
    width = len(grid[0])
    area = height * width
    belief_per_cell = 1.0 / area
    beliefs = []
    for i in range(height):
        row = []
        for j in range(width):
            row.append(belief_per_cell)
        beliefs.append(row)
    return beliefs

def sense(color, grid, beliefs, p_hit, p_miss):
    new_beliefs = []
    #
    # TODO - implement this in part 2
    #
    new_beliefs = [[beliefs[i][j] * p_hit if grid[i][j] == color else beliefs[i][j] * p_miss \
          for j in range(len(beliefs[0]))] for i in range(len(beliefs))]
    return [[new_beliefs[i][j] / sum(n for row in new_beliefs for n in row) \
             for j in range(len(new_beliefs[0]))] for i in range(len(new_beliefs))]

def move(dy, dx, beliefs, blurring):
    height = len(beliefs)
    width = len(beliefs[0])
    new_G = [[0.0 for i in range(width)] for j in range(height)]
    for i, row in enumerate(beliefs):
        for j, cell in enumerate(row):
            new_i = (i + dy) % height
            new_j = (j + dx) % width
            # pdb.set_trace()
            # print(new_i,new_j,height,width)
            new_G[int(new_i)][int(new_j)] = cell
    return blur(new_G, blurring)