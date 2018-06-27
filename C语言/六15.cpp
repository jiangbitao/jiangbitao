#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k;
    char s1[20]={"How do you do?"};
    char s2[]={"What"};
    puts(s1);
    k=strlen(s2);
    for (i=0, j=0; i<20 || j<k; i++, j++)
        s1[i]=s2[j];
    puts(s1);
    return 0;
}