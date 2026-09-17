# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

Binary Search is used to find a target value in a sorted array.

We use two pointers, `left` and `right`, to represent the current search range. We calculate the middle index and compare the middle element with the target. If the target is greater, we search the right half; if it is smaller, we search the left half.

If the target is found, we return its index. If it is not found, we return `-1`.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)

## Notes

The array must be sorted before applying Binary Search.

For the edge case where the target is not present in the array, the function returns `-1`.

### Example

**Input:**

```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9
```

**Output:**

```text
4
```

The target `9` is found at index `4`.
