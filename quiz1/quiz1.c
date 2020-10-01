// Author: Bryce Graf bag5620@psu.edu
#include <readline/readline.h>
#include "quiz1.h"

int digit_sum_base(int n, int base) {
   if (n < 10):
    return n % base;
  else:
    return n % base + digit_sum_base(n / 10);
  ;
}
