#include <stdio.h>
int main()
{
	int a,b,c,d,t;
	printf("请输入四个整数:");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(c>d)
	{
		t=c;
		c=d;
		d=t;
	}
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("%d,%d,%d,%d\n",a,b,c,d);
	return 0;
}