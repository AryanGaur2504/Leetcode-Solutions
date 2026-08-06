# 3345. Smallest Divisible Digit Product I

[View problem on LeetCode](https://leetcode.com/problems/smallest-divisible-digit-product-i/)

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Topics** | `Math` · `Enumeration` |
| **Solved** | 2026-08-06 |
| **Time complexity** | O(D*Log 10 N) --> (D = x - n) |
| **Space complexity** | O(1) |
| **Runtime** | 0 ms |
| **Memory** | 8.6 MB |
| **Submission** | 2096466300 |

## Approach

Find the smallest integer ≥ n by linearly incrementing and checking if its digit product is divisible by t.
