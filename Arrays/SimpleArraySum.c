/*
 * Problem: Simple Array Sum (HackerRank)
 * Language: C
 * 
 * Approach & Logic Steps:
 * -----------------------
 * 1. Initialize an integer variable `sum` to 0 to store the running total.
 * 2. Loop through the array from index `i = 0` up to `ar_count - 1`.
 * 3. In each iteration, add the current element `ar[i]` to `sum`.
 * 4. Return `sum` after the loop completes.
 * 
 * Complexity:
 * - Time Complexity: O(n) - We traverse the array of size 'n' once.
 * - Space Complexity: O(1) - Constant additional memory used.
 */

int simpleArraySum(int ar_count, int* ar) {
    int sum = 0;
    
    for (int i = 0; i < ar_count; i++) {
        sum += ar[i];
    }
    
    return sum;
}
