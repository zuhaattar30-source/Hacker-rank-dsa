#include <stdio.h>
#include <stdlib.h>

/*
 * Problem: Reverse an Array (HackerRank)
 'LOGIC AND APPROACH '-
 1.Allocate dyanmic memory for a new array of size a_count using malloc.
 2.Set *result_count=a_count so the calling function knows the new array size.
 3.Loop through the original array from index 0 to (a_count-1).
 4.Map each element at index i to the reversed index position [ a_count-1-i].
 5.Return the pointer to newly created reversed array.
 */
int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int* reversed = (int*)malloc(a_count * sizeof(int));
    
    for (int i = 0; i < a_count; i++) {
        reversed[i] = a[a_count - 1 - i];
    }
    
    return reversed;
}
