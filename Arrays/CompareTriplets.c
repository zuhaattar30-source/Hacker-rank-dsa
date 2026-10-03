/*
 * Problem: Compare the Triplets (HackerRank)
 * Language: C
 * 
 * Approach & Logic Steps:
 * -----------------------
 * 1. Allocate dynamic memory for an integer array of size 2 (for Alice and Bob).
 * 2. Set *result_count = 2 so the calling function knows the output size.
 * 3. Initialize both scores (result[0] and result[1]) to 0.
 * 4. Loop 3 times (since triplets have 3 elements):
 *    - If a[i] > b[i], award 1 point to Alice (result[0]++).
 *    - If a[i] < b[i], award 1 point to Bob (result[1]++).
 *    - If equal, do nothing.
 * 5. Return the result array pointer.
 */

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    // 1. Set the return array size
    *result_count = 2;
    
    // 2. Allocate memory for 2 integer scores
    int* result = malloc(2 * sizeof(int));
    result[0] = 0; // Alice's score
    result[1] = 0; // Bob's score
    
    // 3. Compare each of the 3 rating categories
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            result[0]++;
        } else if (a[i] < b[i]) {
            result[1]++;
        }
    }
    
    // 4. Return the result array
    return result;
}
