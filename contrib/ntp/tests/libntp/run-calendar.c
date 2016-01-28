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
#include "config.h"
#include "ntp_stdlib.h"
#include "ntp_calendar.h"
#include <string.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_DaySplitMerge(void);
extern void test_SplitYearDays1(void);
extern void test_SplitYearDays2(void);
extern void test_RataDie1(void);
extern void test_LeapYears1(void);
extern void test_LeapYears2(void);
extern void test_RoundTripDate(void);
extern void test_RoundTripYearStart(void);
extern void test_RoundTripMonthStart(void);
extern void test_RoundTripWeekStart(void);
extern void test_RoundTripDayStart(void);
extern void test_IsoCalYearsToWeeks(void);
extern void test_IsoCalWeeksToYearStart(void);
extern void test_IsoCalWeeksToYearEnd(void);
extern void test_DaySecToDate(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

char const *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  UnityBegin("calendar.c");
  RUN_TEST(test_DaySplitMerge, 22);
  RUN_TEST(test_SplitYearDays1, 23);
  RUN_TEST(test_SplitYearDays2, 24);
  RUN_TEST(test_RataDie1, 25);
  RUN_TEST(test_LeapYears1, 26);
  RUN_TEST(test_LeapYears2, 27);
  RUN_TEST(test_RoundTripDate, 28);
  RUN_TEST(test_RoundTripYearStart, 29);
  RUN_TEST(test_RoundTripMonthStart, 30);
  RUN_TEST(test_RoundTripWeekStart, 31);
  RUN_TEST(test_RoundTripDayStart, 32);
  RUN_TEST(test_IsoCalYearsToWeeks, 33);
  RUN_TEST(test_IsoCalWeeksToYearStart, 34);
  RUN_TEST(test_IsoCalWeeksToYearEnd, 35);
  RUN_TEST(test_DaySecToDate, 36);

  return (UnityEnd());
}
