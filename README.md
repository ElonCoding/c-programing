# C Programs

This repository contains various C programming examples and solutions.

## Programs by Lecture/Topic

### `lect12`

- **`n_queens.c`**: Implements the N-Queens problem using backtracking. This program finds and prints one solution for placing N chess queens on an N×N chessboard such that no two queens threaten each other. The default board size is 8x8, but can be changed by modifying the `N` macro.

### `lect13`

- **`array.c`**: Demonstrates basic array input and output. It prompts the user to enter 5 integers and then prints them.
- **`array2.o.c`**: Demonstrates overwriting array elements. It initializes an array with 5 values, then prompts the user to enter 5 new values to replace the existing ones, and finally prints the updated array.

### `lect17`

- **`array_3x3_input.c`**: Creates a 3x3 integer array and populates it with user-provided input. It then prints the entered 3x3 array.
- **`array_3x3_reverse.c`**: Takes a 3x3 integer array as input from the user, prints the original array, reverses the array (treating it as a 1D array for reversal), and then prints the reversed 3x3 array.

## How to Compile and Run

To compile and run any of these C programs, you will need a C compiler (like GCC) installed on your system.

1.  **Navigate to the directory** containing the desired `.c` file in your terminal.
    For example, to compile `n_queens.c`:
    ```bash
    cd "lect12"
    ```

2.  **Compile the program** using GCC:
    ```bash
    gcc <filename>.c -o <output_executable_name>
    ```
    For example:
    ```bash
    gcc n_queens.c -o n_queens
    ```

3.  **Run the executable**:
    ```bash
    ./<output_executable_name>
    ```
    For example:
    ```bash
    ./n_queens
    ```

Follow the on-screen prompts for programs that require user input.