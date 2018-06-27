#include <stdio.h>
int main()
{
int i,j,a,n,sum=0,term=0;
printf("please input a number:");
scanf("%d",&a);
printf("please input n number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
term=term*10+a;
sum=sum+term;
}
printf("a+aa+aaa+...+a...a=%d",sum);
return 0;
} 