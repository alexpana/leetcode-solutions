/**
* https://oj.leetcode.com/problems/climbing-stairs/
*
* Iterative fibonacci.
*/

class Solution {
public:
    int climbStairs(int n) {
        if (n < 1) {
            return 0;
        }

        if (n == 1) {
            return 1;
        }

        if (n == 2) {
            return 2;
        }

        int a = 1, b = 2;
        int c = 0;
        for (int i = 2; i <n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }

        return c;
    }
};