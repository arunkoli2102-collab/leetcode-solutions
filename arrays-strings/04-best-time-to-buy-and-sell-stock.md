## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the lowest stock price seen so far while moving through the array. For each day, we calculate the profit that could be made by selling on that day after buying at the lowest previous price.

We update the maximum profit whenever we find a larger profit.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

If the stock prices continuously decrease, no profitable transaction is possible, so the maximum profit remains 0. We can buy only before we sell.