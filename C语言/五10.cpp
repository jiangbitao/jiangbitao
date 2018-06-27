#include<stdio.h>
#include<stdlib.h>
int f(int i){
    if(i>=0)
        return i>1?f(i-1)+f(i-2):1;
} 
float sum_(int i,float &s){
    if(i<=20){
        s+=1.0*f(i+1)/f(i);
        i++;
        return sum_(i,s);
    }
    else return s;
}
int main()
{
    int i;
    float sum=0.0; 
    printf("sum=%f\n",sum_(1,sum));
    system("pause");
    return 0;
}