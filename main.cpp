#include <assert.h>

#include "solutions/factorial_trailing_zeroes.h"

int main() {
    Solution solution;

    assert(solution.trailingZeroes(1000) == 249);
    assert(solution.trailingZeroes(534567) == 133638);

    return 0;
}