#include "unity/src/unity.h"
#include "../include/calculations.h"

void setUp(void) {}
void tearDown(void) {}

/**
 * Tests for the add function
 */
static void test_add(void)
{
  TEST_ASSERT_EQUAL_INT(6, add(3, 3));
}

static void test_add_zero(void)
{
  TEST_ASSERT_EQUAL_INT(3, add(3, 0));
}

static void test_add_one_negative(void)
{
  TEST_ASSERT_EQUAL_INT(0, add(3, -3));
}

static void test_add_two_negative(void)
{
  TEST_ASSERT_EQUAL_INT(-6, add(-3, -3));
}

int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_add_zero);
  RUN_TEST(test_add_one_negative);
  RUN_TEST(test_add_two_negative);

  return UNITY_END();
}