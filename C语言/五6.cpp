#include <stdio.h>
void main()
{
  int i;
  double s=0,x=1;
  for(i=1;i<=20;i++)
  {
   x=x*i;
   s=s+x;
  }
 printf("%.0f",s);
} 