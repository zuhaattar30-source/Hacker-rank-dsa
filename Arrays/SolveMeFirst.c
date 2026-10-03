/*
 * Problem: Solve Me First (HackerRank)
 * Language: C
 * 
 * Approach & Logic Steps:
 * -----------------------
 * 1. Read two integer inputs ('num1' and 'num2') from standard input.
 * 2. Pass these two integers as arguments to the `solveMeFirst` function.
 * 3. Inside `solveMeFirst`, receive the arguments as parameters `a` and `b`.
 * 4. Perform direct addition using the addition operator (`a + b`).
 * 5. Return the result back to the caller in `main`.
 * 6. Print the resulting sum to standard output.
 * 
 * Complexity:
 * - Time Complexity: O(1) - Constant time addition operation.
 * - Space Complexity: O(1) - Uses a constant amount of memory.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * Calculates the sum of two integers.
 * @param a First integer operand
 * @param b Second integer operand
 * @return Sum of a and b
 */
int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    // Read two integers from stdin
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calculate sum via function call
        int sum = solveMeFirst(num1, num2);
        
        // Print the output
        printf("%d\n", sum);
    }
    
    return 0;
}
