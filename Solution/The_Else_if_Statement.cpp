/*
====================================================================
Problem: The Else if Statement
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a number, use if, else if, and else conditional statements
according to the following conditions:

If the number is greater than 100, print "Big".
Else if the number is smaller than 10, print "Small".
Else, print "Number".

Input:
- An integer number.

Output:
- Print "Big" if number is greater than 100.
- Print "Small" if number is smaller than 10.
- Otherwise, print "Number".

Example 1:
Input:
number = 9

Output:
Small

Explanation:
9 is smaller than 10, so the else if condition works.

Example 2:
Input:
number = 101

Output:
Big

Explanation:
101 is greater than 100, so the if condition works.

Example 3:
Input:
number = 30

Output:
Number

Explanation:
30 is neither greater than 100 nor smaller than 10,
so the else condition works.

Constraints:
1 <= number <= 1000

====================================================================
Approach:

Use if, else if, and else conditional statements.

First, check whether the number is greater than 100.
If the condition is false, check whether the number is smaller
than 10. If both conditions are false, print "Number".

====================================================================
Algorithm:

1. Take the given integer number.
2. Check if number > 100.
3. If true, print "Big".
4. Otherwise, check if number < 10.
5. If true, print "Small".
6. Otherwise, print "Number".
7. Add a newline after printing the result.

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

void utility(int number)
{
    // Check if the number is greater than 100
    if(number > 100)
    {
        printf("Big\n");
    }
    // Check if the number is smaller than 10
    else if(number < 10)
    {
        printf("Small\n");
    }
    // If neither condition is true
    else
    {
        printf("Number\n");
    }
}
