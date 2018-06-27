 include<stdio.h>
void main()
{
 int a,b,c;
 for(a=0;a<10;a++)  //个位的a由0开始
  for(b=0;b<10;b++)  //十位的b由0开始
   for(c=1;c<10;c++)  //百位的c由1开始
    if(a+b*10+c*100==a*a*a+b*b*b+c*c*c)   //注意a，b，c都是单独一个数字，要组成3位数必须使其按位乘以10或者100
     printf("%d,%d,%d\n",c,b,a);  //按照百、十、个的顺序输出结果
}
