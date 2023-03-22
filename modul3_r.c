#include <stdio.h>
int main()
{
  int number1, number2, sum;
  int *pntr1, *pntr2;
  
  pntr1 = &number1;
  pntr2 = &number2;
 
  printf(" Please Enter two integer values : \n ");
  scanf("%d  %d", pntr1, pntr2);
  
  sum = *pntr1 + *pntr2;
 
  printf(" The Sum of two integer values is = %d", sum);
  return 0;
}


