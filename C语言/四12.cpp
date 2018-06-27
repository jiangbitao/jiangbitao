#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,h;
	printf("请分别输入x y坐标：");
	scanf("%f %f",&x,&y);
	printf("x=%.2f  y=%.2f\n", x, y);
	if(x>=0&&y>=0) 
	{
		if(pow(x-2,2)+pow(y-2,2)<=1)h=10;
		else h=0;
	}
	if(x>=0&&y<=0) 
	{
		if(pow(x-2,2)+pow(y+2,2)<=1)h=10;
		else h=0;
	}
	if(x<=0&&y>=0)
	{
		if(pow(x+2,2)+pow(y-2,2)<=1)h=10;
		else h=0;
	}
	if(x<=0&&y<=0)
	{
		if(pow(x+2,2)+pow(y+2,2)<=1)h=10;
		else h=0;
	}
	printf("该点的建筑高度为%.4f\n",h);
	return 0;
}
