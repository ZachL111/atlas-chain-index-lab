#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {91, 104, 15, 21, 10};
    assert(score_signal(signal_case_1) == 211);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {90, 100, 25, 17, 9};
    assert(score_signal(signal_case_2) == 199);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {74, 101, 20, 19, 10};
    assert(score_signal(signal_case_3) == 174);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
