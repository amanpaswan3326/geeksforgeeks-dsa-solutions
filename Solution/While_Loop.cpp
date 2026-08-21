 /*
====================================================================
Problem: While Loop
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a number x, the task is to print the numbers from x to 0
in decreasing order in a single line.

Input:
- An integer x.

Output:
- Print all numbers from x to 0 in decreasing order.

Example 1:
Input:
x = 3

Output:
3 2 1 0

Explanation:
Numbers in decreasing order from 3 are 3 2 1 0.

Example 2:
Input:
x = 5

Output:
5 4 3 2 1 0

Explanation:
Numbers in decreasing order from 5 are 5 4 3 2 1 0.

Constraints:
0 <= x <= 100

====================================================================
Approach:

Start from x and decrease the value by 1 until it reaches 0.

A loop is used to print each number in decreasing order.

====================================================================
Algorithm:

1. Take the given integer x.
2. Start the loop from i = x.
3. Continue the loop while i >= 0.
4. Print the value of i.
5. Decrease i by 1 after every iteration.

====================================================================
Complexity:

Time Complexity:
O(x)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

void utility(int x)
{
    for(int i = x; i >= 0; i--)
    {
        printf("%d ", i);
    }
}
