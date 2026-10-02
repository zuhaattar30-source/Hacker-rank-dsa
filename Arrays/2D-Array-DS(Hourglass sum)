/*
 * Problem: 2D Array - DS (Hourglass Sum)
 * Repository: dsa-third-sem / arrays
 * File: 2d_array_hourglass.c
 * 
 * --- LOGIC & APPROACH ---
 * 1. Initialize 'max_sum' to -100 (or INT_MIN) because array elements can be negative.
 * 2. An hourglass shape takes a 3x3 grid inside the 6x6 matrix.
 * 3. Use nested loops:
 *    - Outer loop 'i' goes from 0 to 3 (top-left row of each hourglass).
 *    - Inner loop 'j' goes from 0 to 3 (top-left column of each hourglass).
 * 4. For each (i, j), sum the 7 elements forming the hourglass pattern:
 *    - Top row (3 elements): arr[i][j] + arr[i][j+1] + arr[i][j+2]
 *    - Middle row (1 element): arr[i+1][j+1]
 *    - Bottom row (3 elements): arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
 * 5. Update 'max_sum' if 'current_sum' is greater.
 * 6. Return 'max_sum'.
 * 
 * --- COMPLEXITY ---
 * Time Complexity:  O(1) - Constant time since the matrix is fixed at 6x6.
 * Space Complexity: O(1) - Uses a few scalar variables for tracking sums.
 */

#include <stdio.h>
#include <stdlib.h>

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int max_sum = -100;

    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            int current_sum = arr[i][j]     + arr[i][j+1]   + arr[i][j+2]
                                            + arr[i+1][j+1]
                            + arr[i+2][j]   + arr[i+2][j+1] + arr[i+2][j+2];

            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}
