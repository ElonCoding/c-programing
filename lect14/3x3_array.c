#include <stdio.h>

int main() {
    int size = 3;
    int square[3][3] = {0};

    int row = 0, col = size / 2;

    for (int val = 1; val <= size * size; val++) {
        square[row][col] = val;

        int nextRow = (row - 1 + size) % size;
        int nextCol = (col + 1) % size;

        if (square[nextRow][nextCol] != 0) {
            row = (row + 1) % size;
        } else {
            row = nextRow;
            col = nextCol;
        }
    }

    printf("Magic Square (%dx%d):\n", size, size);
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            printf("%3d ", square[r][c]);
        }
        printf("\n");
    }

    return 0;
}