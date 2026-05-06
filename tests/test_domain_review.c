#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {43, 37, 30, 77};
    assert(domain_review_score(item) == 110);
    assert(strcmp(domain_review_lane(item), "watch") == 0);
    return 0;
}
