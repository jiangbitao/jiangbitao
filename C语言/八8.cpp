#include<stdio.h>
int main()
{int daxie=0,xiaoxie=0,kongge=0,shuzi=0,qita=0;
 char *p,a[80];
 gets(a);

 for(p=a;(*p)!='\0';p++)           //这里，把'\n'改成'\0'
{ if((*p)>='A'&&(*p)<='Z')daxie++;
   else if((*p)>='a'&&(*p)<='z')xiaoxie++;
        else  if((*p)==' ')kongge++;
              else  if((*p)>='0'&&(*p)<='9')shuzi++;
                    else qita++;
 }
 printf("共有大写字母%d个，小写字母%d个，空格%d个，数字%d个，其他字符%d个\n",daxie,xiaoxie,kongge,shuzi,qita);
 return 0;
}