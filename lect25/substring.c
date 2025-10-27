#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int lastSeen[128];
    
    // Initialize all positions to -1 (not seen)
    for (int i = 0; i < 128; i++) {
        lastSeen[i] = -1;
    }
    
    int maxLength = 0;
    int start = 0; // Start of current window
    
    // Iterate through the string
    for (int end = 0; s[end] != '\0'; end++) {
        char currentChar = s[end];
        
        // If character was seen and is within current window
        if (lastSeen[currentChar] >= start) {
            // Move start to position after last occurrence
            start = lastSeen[currentChar] + 1;
        }
        
        // Update last seen position of current character
        lastSeen[currentChar] = end;
        
        // Calculate current window length and update max
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}