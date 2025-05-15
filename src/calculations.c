#include "../include/calculations.h"
#include <math.h>

/**
 * Addition function
 */
int add(int value1, int value2)
{
  return value1 + value2;
}

/**
 * Subtraction function
 */
int subtract(int value1, int value2)
{
  return value1 - value2;
}

/**
 * Multiplication function
 */
int multiply(int value1, int value2)
{
  return value1 * value2;
}

/**
 * Division function
 */
int divide(int value1, int value2)
{
  if (value2 == 0)
  {
    printf("ERROR: Cannot divide by zero.");
    return -1;
  }

  return value1 / value2;
}

/**
 * Power of 2 function
 */
int power_two(int value1)
{
  return pow(value1, 2);
}

/**
 * Power of n function
 */
int power_n(int value1, int value2)
{
  return pow(value1, value2);
}