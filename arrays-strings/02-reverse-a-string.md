## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

The string is given as an array of characters. We use the two-pointer technique to reverse it in place.

One pointer starts from the beginning and the other starts from the end. We swap the characters at both positions and move the pointers toward the center until the entire string is reversed.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Notes

The important point is that the string must be reversed **in place**, so we do not need to create another array. For an empty string or a string containing a single character, no swapping is required.
