// Author: Bryce Graf bag5620@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include "quiz1.h"

int main(void) {
  int n = atoi(readline("Enter an int: "))
  int base = atoi(readline("Enter an int: "))
  printf("answer is %f", digit_sum_base(n, base))
  return 0;
}
