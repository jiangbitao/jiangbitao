# include <stdio.h>
#define PI 3.1415926 //用预处理命令定义符号常量
void main ()
{
  float r,area;
  scanf("%f",&r);
  area=PI *r*r;
  printf("area=%f\n",area);
}