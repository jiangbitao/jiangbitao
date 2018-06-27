#include<stdio.h>

#include<string,h>

int main()

{

     char c[100000],a[10000],b[10000];

     gets(a);

     gets(b);

     int n=0,m=0,i;

     for(i=0;i<strlen(a);i++)

         c[m++]=a[i];

     for(i=0;i<strlen(b);i++)

         c[m++]=b[i];

     for(i=0;i<m+n;i++)

         printf("%c",c[i]);

     puts("");

     return 0;

}