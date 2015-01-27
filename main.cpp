#include <assert.h>

#include "solutions/excel_sheet_column_title.h"

int main() {
    Solution solution;

    assert(solution.convertToTitle(26) == "Z");
    assert(solution.convertToTitle(1) == "A");

    assert(solution.convertToTitle(27) == "AA");
    assert(solution.convertToTitle(51) == "AZ");

    return 0;
}