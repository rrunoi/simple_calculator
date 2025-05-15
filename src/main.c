#include <stdio.h>
#include "calculations.c"

int main()
{
  /**
   * Print return value from add funtion.
   */
  printf("3 + 3 = %d\n", add(3, 3));

  /**
   * Print return value from subtract funtion.
   */
  printf("3 - 3 = %d\n", subtract(3, 3));

  /**
   * Print return value from multiply funtion.
   */
  printf("3 * 3 = %d\n", multiply(3, 3));

  /**
   * Print return value from division funtion.
   */
  printf("3 / 3 = %d\n", divide(3, 3));

  return 0;
}
