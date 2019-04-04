#include "21400611.h"
#include <stdlib.h>

int reverse_digits(int n) {
  int result=0;

  while(1) {
    if(n<1)
      break;
    result = (10*result) + (n%10);
    n /= 10;
  }

  return result;
}
