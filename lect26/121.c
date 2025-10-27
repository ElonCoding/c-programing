#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }

    return maxProfit;
}

// This code defines a function to calculate the maximum profit from stock prices given in an array. It iterates through the prices, keeping track of the minimum price seen so far and calculating potential profits at each step, updating the maximum profit accordingly. The main function demonstrates its usage with a sample array of stock prices.