#include <math.h>
#include <stdio.h>

void calcBhaskara(double a, double b, double c) {
  double delta, bhaskara1, bhaskara2;

  delta = pow(b, 2) - 4 * a * c;

  bhaskara1 = -b + sqrt(delta) / 2 * a;
  bhaskara2 = -b + sqrt(delta) / 2 * a;

  printf("X1 = %lf.2\n", bhaskara1);
  printf("X1 = %lf.2\n", bhaskara2);
}
