#include "xanrestsvm_unittests.h"

// Declare a test of class XAN_RESTSVM named SampleTest
TG_TEST(XAN_RESTSVM, SampleTest)
{
  // Object has just started (after config() and start())
  // thus internal code should be k4_i0
  ASSERT_EQ(mcp_cli->m4_codeInterne, k4_i0);
}

// vim: ft=cpp
