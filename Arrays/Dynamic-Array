/*
 * Problem: Dynamic Array (HackerRank)
 * Repository: dsa-third-sem / arrays
 * File: dynamic_array.c
 * 
 * --- LOGIC & APPROACH ---
 * 1. Initialize 'n' dynamic arrays along with size and capacity trackers.
 * 2. Maintain a variable 'lastAnswer = 0' and an answer output array.
 * 3. For each query [type, x, y]:
 *    - Calculate target index: idx = (x ^ lastAnswer) % n
 *    - Type 1: Append 'y' to arr[idx] (resize with realloc if full).
 *    - Type 2: Set lastAnswer = arr[idx][y % size(arr[idx])] and save to answers.
 * 4. Free dynamically allocated memory for sub-arrays before returning.
 * 
 * --- COMPLEXITY ---
 * Time Complexity:  O(Q) where Q is the number of queries.
 * Space Complexity: O(N + Q) to store dynamic sub-arrays and answer array.
 */

#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    int** arr = (int**)malloc(n * sizeof(int*));
    int* arr_sizes = (int*)calloc(n, sizeof(int));
    int* arr_capacities = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        arr_capacities[i] = 2;
        arr[i] = (int*)malloc(arr_capacities[i] * sizeof(int));
    }
    
    int* result = (int*)malloc(queries_rows * sizeof(int));
    *result_count = 0;
    int lastAnswer = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            if (arr_sizes[idx] == arr_capacities[idx]) {
                arr_capacities[idx] *= 2;
                arr[idx] = (int*)realloc(arr[idx], arr_capacities[idx] * sizeof(int));
            }
            arr[idx][arr_sizes[idx]++] = y;
        } 
        else if (type == 2) {
            int element_idx = y % arr_sizes[idx];
            lastAnswer = arr[idx][element_idx];
            result[(*result_count)++] = lastAnswer;
        }
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    free(arr_sizes);
    free(arr_capacities);

    return result;
}
