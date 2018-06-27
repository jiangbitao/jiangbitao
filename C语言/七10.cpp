#include <stdio.h>

void main(){
    void maxLen(char str[50]);
    char str[50];
    gets(str);
    maxLen(str);
}

void maxLen(char str[50]){
    int i,j=1,t=-1,start=0,m;
    int maxNum(int num[50]);
    int num[50]={0};
    
    num[0]=-1;//num[1]放第一个单词的长度，num[2]放第二个单词的长度，。。。
    for(i=0;i<50;i++){
        if(str[i]==' ' || str[i]=='\0') {num[j]=i-t-1;t=i;j++;
        }
    }
    //找出num[j]最大时的下标m
    m=maxNum(num);

    //计算最长字符串的开始位置
    for(i=1;i<m;i++){
        start += (num[i]+1);
    }

    //输出最长字符串
    for(i=start;i<start+num[m];i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

int maxNum(int num[50]){
    int i,j;
    int max=num[0];//num[0]=-1
    for(i=0; i<50; i++){
        if(max<num[i]){max=num[i]; j=i;}
    }
    return (j);
}