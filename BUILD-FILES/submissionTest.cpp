#include "submission.h"
#include "tddFuncs.h"


int main() {

  START_GROUP(10.0, "tests for submission from " __FILE__ );

  ASSERT_EQUALS(true, sample());

  END_GROUP();

  // Ungrouped tests
  
  ASSERT_EQUALS(true, sample());

  
  return 0;
}
