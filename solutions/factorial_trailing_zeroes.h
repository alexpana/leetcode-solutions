/**
* https://oj.leetcode.com/problems/factorial-trailing-zeroes/
*
* Given an integer n, return the number of trailing zeroes in n!.
* Note: Your solution should be in logarithmic time complexity.
*
* Observation: the number of 0s equals the number of pairs of 2 and 5
* in n!. Since we'll see more 2's than 5s, it's enough to count the
* occurrences of 5.
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int sum = 0;
        while (n >= 5) {
            sum += n / 5;
            n /= 5;
        }

        return sum;
    }
};