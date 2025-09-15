#include <stdio.h>
#include <stdbool.h>

#define N 8 // You can change N for different board sizes

// Function to print the solution (chessboard)
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if a queen can be placed on board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

// A recursive utility function to solve N Queen problem
bool solveNQueensUtil(int board[N][N], int col) {
    // Base case: If all queens are placed then return true
    if (col >= N) {
        printSolution(board);
        return true; // Return true to find one solution, or false to find all solutions
    }

    // Consider this column and try placing this queen in all rows one by one
    for (int i = 0; i < N; i++) {
        // Check if the queen can be placed on board[i][col]
        if (isSafe(board, i, col)) {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // Recur to place rest of the queens
            if (solveNQueensUtil(board, col + 1)) {
                return true;
            }

            // If placing queen in board[i][col] doesn't lead to a solution,
            // then remove queen from board[i][col] (backtrack)
            board[i][col] = 0; // BACKTRACK
        }
    }

    // If the queen cannot be placed in any row in this column col,
    // then return false
    return false;
}

// This function solves the N Queen problem using backtracking.
// It mainly uses solveNQueensUtil() to solve the problem.
// It returns false if queens cannot be placed, otherwise, return true
// and prints placement of queens in the form of 1s.
// Please note that there may be more than one solutions, this function
// prints one of the feasible solutions.
void solveNQueens() {
    int board[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            board[i][j] = 0;
        }
    }

    if (solveNQueensUtil(board, 0) == false) {
        printf("Solution does not exist\n");
        return;
    }

    return;
}

// Driver program to test above functions
int main() {
    solveNQueens();
    return 0;
}