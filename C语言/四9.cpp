#include<stdio.h>
int main()
{
    int a,b,c,d,e,p,n;
    scanf("%d",&n);
    if (n>9999)
         p=5;
    else if(n>999)
         p=4;
    else if(n>99)
         p=3;
    else if(n>9)
         p=2;
    else p=1;
    printf("位数:%d\n",p);
    a=n/10000;
    b=(int)(n-a*10000)/1000;
    c=(int)(n-a*10000-b*1000)/100;
    d=(int)(n-a*10000-b*1000-c*100)/10;
    e=(int)(n-a*10000-b*1000-c*100-d*10);
    printf("每一位数为:");
        if(p==5) 
        {
            printf("%d %d %d %d %d\n",a,b,c,d,e); 
            printf("反向数为:%d%d%d%d%d\n",e,d,c,b,a); 
        }
        if(p==4)
        {
            printf("%d %d %d %d\n",b,c,d,e); 
            printf("反向数为:%d%d%d%d\n",e,d,c,b); 
        }
        if(p==3) 
        {
            printf("%d %d %d\n",c,d,e); 
            printf("反向数为:%d%d%d\n",e,d,c); 
        }
        if(p==2)
        {
            printf("%d %d\n",d,e);
            printf("反向数为:%d%d\n",e,d); 
        }
        if(p==1)
        {
            printf("%d\n",e); 
            printf("反向数为:%d\n",e); 
        }
 return 0;
}