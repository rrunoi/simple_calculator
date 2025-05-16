#include "unity/src/unity.h"
#include "../src/calculations.c"

void setUp(void) {}
void tearDown(void) {}

/**
 * Tests for the add function
 */
static void test_add(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(6, add(3, 3));
}

static void test_add_zero(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(3, add(3, 0));
}

static void test_add_one_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(0, add(3, -3));
}

static void test_add_two_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-6, add(-3, -3));
}

/**
 * Tests for the subtract function
 */
static void test_subtract(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(0, subtract(3, 3));
}

static void test_subtract_zero(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-3, subtract(-3, 0));
}

static void test_subtract_one_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-6, subtract(-3, 3));
}

static void test_subtract_two_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(0, subtract(-3, -3));
}

/**
 * Tests for the multiply function
 */
static void test_multiply(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(9, multiply(3, 3));
}

static void test_multiply_zero(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(0, multiply(3, 0));
}

static void test_multiply_one_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-9, multiply(3, -3));
}

static void test_multiply_two_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(9, multiply(-3, -3));
}

/**
 * Tests for the division function
 */
static void test_divide(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(3, divide(9, 3));
}

static void test_divide_one_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-3, divide(9, -3));
}

static void test_divide_two_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(3, divide(-9, -3));
}

/**
 * Tests for the power_n function
 */
static void test_power_n(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(27, power_n(3, 3));
}

static void test_power_n_zero(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(1, power_n(3, 0));
}

static void test_power_n_one_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(0.0370370, power_n(3, -3));
}

static void test_power_n_two_negative(void)
{
  // TEST_IGNORE();
  TEST_ASSERT_EQUAL_FLOAT(-0.0370370, power_n(-3, -3));
}

int main(void)
{
  UNITY_BEGIN();

  // Run addition tests
  RUN_TEST(test_add);
  RUN_TEST(test_add_zero);
  RUN_TEST(test_add_one_negative);
  RUN_TEST(test_add_two_negative);

  // Run subtraction tests
  RUN_TEST(test_subtract);
  RUN_TEST(test_subtract_zero);
  RUN_TEST(test_subtract_one_negative);
  RUN_TEST(test_subtract_two_negative);

  // Run multiplication tests
  RUN_TEST(test_multiply);
  RUN_TEST(test_multiply_zero);
  RUN_TEST(test_multiply_one_negative);
  RUN_TEST(test_multiply_two_negative);

  // Run division tests
  RUN_TEST(test_divide);
  RUN_TEST(test_divide_one_negative);
  RUN_TEST(test_divide_two_negative);

  // Run power_n tests
  RUN_TEST(test_power_n);
  RUN_TEST(test_power_n_zero);
  RUN_TEST(test_power_n_one_negative);
  RUN_TEST(test_power_n_two_negative);

  return UNITY_END();
}