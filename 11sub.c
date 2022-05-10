#include "1sub.h"


int sum1(int n){

  return n*(n+1)*(2*n+1)/6;

}

double sum2(int a, int b, double c){

  a=1;

  c = 1.0;

  for (a = 1; a <= b; a++) {
   c=c/a/a;  
  }

  return c;
}


int factrial(int a,int b,int c){

  a=1;
  c=1;

  for (a = 1; a <= b; a++) {
   c=c*a;  
 }

 return c;
}


int combination(int n, int r){
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}