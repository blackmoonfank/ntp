/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_AdditionLR();
extern void test_AdditionRL();
extern void test_SubtractionLR();
extern void test_SubtractionRL();
extern void test_Negation();


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "lfpfunc.c";
  UnityBegin("lfpfunc.c");
  RUN_TEST(test_AdditionLR, 438);
  RUN_TEST(test_AdditionRL, 456);
  RUN_TEST(test_SubtractionLR, 474);
  RUN_TEST(test_SubtractionRL, 488);
  RUN_TEST(test_Negation, 505);

  return (UnityEnd());
}