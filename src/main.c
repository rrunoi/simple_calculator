#include <stdio.h>
#include "calculations.c"

int main()
{
  float value1;
  float value2;
  char operator;

  printf("Enter first number.\n");
  scanf("%f", &value1);

  printf("Possible operators: +, -, *, /, ^\n");
  scanf("%s", &operator);

  printf("Enter second number.\n");
  scanf("%f", &value2);

  switch (operator)
  {
  case '+':
    printf("%f + %f = %f\n", value1, value2, add(value1, value2));
    break;
  case '-':
    printf("%f + %f = %f\n", value1, value2, subtract(value1, value2));
    break;
  case '*':
    printf("%f + %f = %f\n", value1, value2, multiply(value1, value2));
    break;
  case '/':
    if (value2 == 0)
    {
      printf("ERROR: Cannot divide by zero.");
      break;
    }
    printf("%f + %f = %f\n", value1, value2, divide(value1, value2));
    break;
  case '^':
    printf("%f + %f = %f\n", value1, value2, power_n(value1, value2));
    break;
  default:
    printf("Not a valid operator.");
    break;
  }

  return 0;
}
