#include <stdio.h>
#include "1sub.h"

int main(void){

  /* 級数の二乗和 */

  int n=7;

  sum1(n);

  printf("級数の和 = %d\n", sum1(n));

  return 0;
}
