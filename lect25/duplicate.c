#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int removeDuplicates(int* nums, int numsSize) {
    // Edge case: empty array
    if (numsSize == 0) {
        return 0;
    }
    
    // Two pointer approach
    // i: position to place next unique element
    // j: pointer to scan through array
    int i = 0;
    
    for (int j = 1; j < numsSize; j++) {
        // If current element is different from previous unique element
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
  
    return i + 1;
}