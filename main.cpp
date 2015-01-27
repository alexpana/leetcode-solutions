#include <iostream>
#include <assert.h>

#include "solutions/roman_to_integer.h"

int main() {
    Solution solution;

    assert(solution.romanToInt("IIV") == 3);
    assert(solution.romanToInt("III") == 3);
    assert(solution.romanToInt("VII") == 7);
    assert(solution.romanToInt("XVII") == 17);
    assert(solution.romanToInt("MMXIV") == 2014);
    assert(solution.romanToInt("DCXXI") == 621);

    return 0;
}