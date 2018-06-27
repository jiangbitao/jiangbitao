# include <stdio.h>
# include <math.h>

int main()
{
    int sign=1;
    double pi=0.0,term;
    int n=0;
    
    while(fabs(term)>=1e-8)
    {
        ++n;
        term = 1.0/(2*n-1)*sign;
        pi += term;
        sign = -sign;
    }
    pi *= 4;
    printf("pi的近似值是%lf\n",pi);
    printf("循环体循环了%d次\n",n);
    return 0;
}