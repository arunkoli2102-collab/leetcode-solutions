# Valid Anagram

## Problem
Given two strings `s` and `t`, determine if `t` is an anagram of `s`.

## Difficulty
Easy

## Link
https://leetcode.com/problems/valid-anagram/

## Approach
Use an array of size 256 to count the frequency of each character.
Increase the count for characters in the first string and decrease it for characters in the second string.
If all counts are zero, the two strings are anagrams.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
Tested locally with:
- Typical case: `anagram`, `nagaram` → Anagram
- Edge case: strings with different lengths → Not Anagram