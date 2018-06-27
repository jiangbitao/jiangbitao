#include  <stdio.h>

main()
{
 char str[3][81];
 int upper,lower,digit,space,other;
 int i,j;
 upper=0;lower=0;digit=0;space=0;other=0;
 
 printf ("请输入三行字符：\n");

 for (i=0;i<3;i++)
     gets(str[i]);

 for (i=0;i<3;i++)
 {
     for (j=0;j<80;j++)
     {
         if (str[i][j]>='A' && str[i][j]<='Z')
             upper++;
         else if (str[i][j]>='a' && str[i][j]<='z')
             lower++;
         else if (str[i][j]>='0' && str[i][j]<='9')
             digit++;
         else if (str[i][j]==' ')
             space++;
         else
             other++;
     }
 }
 printf("大写字母：%d 个\n",upper);
 printf("小写字母：%d 个\n",lower);
 printf("数　　字：%d 个\n",digit);
 printf("空　　格：%d 个\n",space);
 printf("其　　它：%d 个\n",other);
}