#include <stdio.h>
#include <assert.h>
#include "colorbynumber.h"
#include "numberbycolor.h"
#include "testnumber_pair.h"
#include "testpair_number.h"


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
