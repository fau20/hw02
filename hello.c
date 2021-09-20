#include <stdio.h>

int main(int a) {
  printf("Hello!");
  printf("\n%d %lf %c", 2, 2.5, 's');

  short d = 23534672646;
  printf("\nOut of bounds short %hi", d);

  long n = 23534672646;
  printf("\nThis number is equal to %ld", n);

  float b = 34346;
  printf(", which is not equal to %f", b);

  a = 250;
  unsigned int c = -250;
  int i = -250;
  printf("\nThree integers: %d %d %d", a, c, i);
  return 0;
}
