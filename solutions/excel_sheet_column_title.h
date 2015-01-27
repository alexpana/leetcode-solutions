/**
* https://oj.leetcode.com/problems/excel-sheet-column-title/
*
* Given a positive integer, return its corresponding column title
* as appear in an Excel sheet.
*/

#include <string>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while (n > 0) {
            n -= 1;
            int m = n % 26;
            result = (char)('A' + m) + result;
            n = n / 26;
        }

        return result;
    }
};