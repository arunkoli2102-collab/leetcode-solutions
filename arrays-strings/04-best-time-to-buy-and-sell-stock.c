#include <stdio.h>

int maxProfit(int prices[], int size) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    // Test Case 1
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;

    printf("Test Case 1: %d\n", maxProfit(prices1, size1));

    // Test Case 2 - Edge Case
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;

    printf("Test Case 2: %d\n", maxProfit(prices2, size2));

    return 0;
}