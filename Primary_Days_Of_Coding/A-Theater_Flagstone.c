#include<stdio.h>
int main()
{
  long long int theatre_ceil,theatre_row,flagstone_number,m,n;
  scanf("%lld %lld %lld",&theatre_ceil,&theatre_row,&flagstone_number);
  if(theatre_ceil%flagstone_number==0)
  {
   m=theatre_ceil/flagstone_number;
  }
  else
  {
   m=(theatre_ceil/flagstone_number)+1;
  }
  if(theatre_row%flagstone_number==0)
  {
   n=theatre_row/flagstone_number;
  }
  else
  {
   n=(theatre_row/flagstone_number)+1;
  }
  printf("%lld",m*n);
  return 0 ;
}
