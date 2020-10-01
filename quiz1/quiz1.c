// Author: Bryce Graf bag5620@psu.edu
#include "quiz1.h"
#include <readline/readline.h>


int digit_sum_base(int n, int base) {
   if (n < 10):
    return n
  else:
    return n % base + digit_sum_base(n // 10)
 


  return 0;
}
