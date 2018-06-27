#include <stdio.h>
int length(char *s);                   //定义长度函数
int main()
{
    char str[20], *p=str;
    printf("Please enter string: ");   //输入字符串
    gets(p);
    printf("The string length is %d\n", length(p));    //调用长度函数并输出字符串长度
    return 0;
}
//长度函数
int length(char *s)
{
    for (int i=0; *s++; i++);
    return i;
}