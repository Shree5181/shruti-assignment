#include<stdio.h>
void sort (int *a, int *b);
int main()
 {
  int m = 25;
  int n = 100;
  printf("m is %d, n is %d\n", m, n);
  sort(&m, &n);
  printf("m is %d, n is %d\n", m, n);
  return 0;
  }
void sort (int *a, int *b)
 {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  }

