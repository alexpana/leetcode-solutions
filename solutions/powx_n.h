/**
* https://oj.leetcode.com/problems/powx-n/
*
* Implement pow(x, n).
*/

class Solution {
public:
    double pow(double x, int n) {
        if (n == 0) {
            return 1;
        }

        if (n < 0) {
            return 1.0 / (pow(x, -(n + 1)) * x);
        }

        if (n == 1) {
            return x;
        }

        double halfPow = pow(x, n/2);

        if (n % 2 == 0) {
            return halfPow * halfPow;
        } else {
            return halfPow * halfPow * x;
        }
    }
};