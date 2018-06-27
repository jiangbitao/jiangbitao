#include <iostream>  
using namespace std;  
int main()  
{  
    int a,b,c,d;  
    cin>>a>>b>>c;  
    if(a>b) d=a;  
    else if(b>c)d=b;  
    else d=c;  
    if(a>c)d=a;  
    else if(b>c)d=b;  
    else d=c;  
    cout<<"max="<<d<<endl;  
    return 0;  
}  