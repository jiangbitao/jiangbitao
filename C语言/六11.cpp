#include <stdio.h>  
int main()  
{  
    int i,j;  
    for(i=0;i<5;i++)  
    {     
        for(j=0;j<i;j++)//控制空格  
             printf("  ");    
  
        for(j=0;j<5;j++)//控制输出5个'*'  
            printf("* ");//交替输出'*'与' '  
      
        printf("\n");  
    }  
    return 0;  
}  