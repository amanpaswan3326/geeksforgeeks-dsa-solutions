/*
====================================================================
Problem: Multiplication Table
Platform: GeeksforGeeks
Difficulty: Easy

Problem Statement:
Given a number n, print the multiplication table from 1 to 10
for n in a single line, separated by spaces.

Input:
- An integer n.

Output:
- Print the multiplication table of n from 1 to 10.

Example 1:
Input:
n = 9

Output:
9 18 27 36 45 54 63 72 81 90

Explanation:
The multiples of 9 from 1 to 10 are printed in a single line.

Example 2:
Input:
n = 2

Output:
2 4 6 8 10 12 14 16 18 20

Explanation:
The multiples of 2 from 1 to 10 are printed in a single line.

Constraints:
1 <= n <= 10^6

====================================================================
Approach:

Use a loop from 1 to 10.

In each iteration, multiply n by the current loop value
and print the result.

====================================================================
Algorithm:

1. Take the given integer n.
2. Start a loop from i = 1.
3. Continue the loop while i <= 10.
4. Calculate n * i.
5. Print the result.
6. Increment i by 1.

====================================================================
Complexity:

Time Complexity:
O(1)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }

    return 0;
}
