#include<stdio.h>
int main()
{
        char str1[80],str2[80];
        int i=0,r;
        puts("input string1:");
        gets(str1);
        puts("input string2:");
        gets(str2);
       
        while((str1[i]==str2[i])&&(str1[i]!='\0')) //如果两个对应字符相等，且两字符串都没有结束，则i++，继续判断下一个字符；
                                                   //否则，只要两个字符不相等，或者任意字符串已经结束，则不再进行下一个字符的判断。
        {
            i++;      
        }
        if(str1[i]=='\0'&&str2[i]=='\0')    //如果同时结束，则相等
        {
            r=0;
        }
        else
        {
            r=str1[i]-str2[i];
        }
        printf("result:%d.\n",r);

    return 0;
}