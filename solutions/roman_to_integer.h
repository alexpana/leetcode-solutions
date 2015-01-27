/**
* https://oj.leetcode.com/problems/roman-to-integer/
*
* Given a roman numeral, convert it to an integer.
*/

#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // I = 1 V = 5 X = 10 L = 50 C = 100 D = 500 M = 1,000
        int acc = 0;
        int sum = 0;
        int lc = 0;

        for (int i = 0; i < s.size(); ++i) {
            int c = toInt(s[i]);

            if (lc == 0 || lc == c) {
                acc += c;
            } else if (c < acc) {
                sum += acc;
                acc = c;
            } else if (c > acc ) {
                acc = c - acc;
            }

            lc = c;
        }

        sum += acc;

        return sum;
    }

private:
    int toInt(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};