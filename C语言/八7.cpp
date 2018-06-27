#include<stdio.h>
#include<string.h>
//#define N 10
main()
{
void fun(char a[10]);
char a[10];
printf("ÇëÊäÈë×Ö·û´®a:\n");
scanf("%s",a);
fun(a);
}
void fun(char a[10])
{
int m,i;
char b[10],*p;
scanf("m=%d",&m);
p=p+m;
for(i=0;*p!='\0';p++,i++)
b[i]=*p;
b[i]='\0';
printf("Êä³öÁíÒ»¸ö×Ö·û´®b:\n");
puts(b);
}