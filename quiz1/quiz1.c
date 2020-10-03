// Author: Bryce Graf bag5620@psu.edu
#include <readline/readline.h>
#include "quiz1.h"

int digit_sum_base(int n, int base) {
  if (n /base == 0){
    return n % base;
  }
  else{
    return n % base + digit_sum_base(n / base, base);
  }
}
