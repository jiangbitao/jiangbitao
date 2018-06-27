# include <stdio.h>

int main()
{
    int i,j,n=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++,n++)
        {
            if(0==n%5)
            {
                printf("\n");
            }
            if(3==i && 1==j)
            {
                continue;
            }
            printf("%d\t",i*j);
        }
    }
    printf("\n");
    return 0;
}