# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

We move all non-zero elements to the beginning of the array while maintaining their original order. A pointer `j` keeps track of the position where the next non-zero element should be placed.

After placing all non-zero elements, we fill the remaining positions of the array with zeroes.

## Complexity

* **Time:** O(n)
* **Space:** O(1)

## Notes

The operation must be performed **in-place**, so we modify the original array instead of creating another array.

The order of the non-zero elements should remain unchanged.

### Example

**Input:**

```text
nums = [0, 1, 0, 3, 12]
```

**Output:**

```text
[1, 3, 12, 0, 0]
```

The non-zero elements remain in their original order, and all zeroes are moved to the end.
