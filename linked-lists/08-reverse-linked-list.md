# Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

We reverse the linked list by changing the direction of each node's `next` pointer.

We use three pointers:

- `prev` — stores the previous node
- `current` — stores the current node
- `nextNode` — temporarily stores the next node

For each node, we change its `next` pointer to point to `prev`. Finally, `prev` becomes the new head of the reversed linked list.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Notes

The algorithm reverses the linked list in-place without using another linked list.

### Test Case 1

**Input:**
```text
1 -> 2 -> 3 -> 4 -> 5