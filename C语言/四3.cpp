#include<stdio.h>
void main()
{
 int a,i=0,b[3];
 printf("input a three bit number\n");
 scanf("%d",&a);
 if(a>=100&&a<1000)
 {
   b[i++]=a/100;
   b[i++]=a/10%10;
   b[i]=a%10;
 }
 for(int j=i;j>=0;j--)
  printf("%d",b[j]);
}