#include<stdio.h> 

main() 
{ 
float a, x1, x2; 
printf("输入需要开方的数："); 
scanf("%f", &a); 
if (a==0) 
printf("0的平方根为：0"); 
else 
{ 
x1=x2=a; 
do 
{ 
x1=x2*0.6666666F+a/(x2*x2*3); 
x2=x1*0.6666666F+a/(x1*x1*3); 
//x1=(x2+a/x2)/2; //求平方根的 
//x2=(x1+a/x1)/2; //求平方根的 
}while (x2-x1>=1e-5 || x1-x2>=1e-5); 
printf("%f的平方根为：%f", a, x2); 
} 
}