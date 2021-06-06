#include<bits/stdc++.h>
using namespace std;
void fibo(int a,int b,int range)
{
    if(range>0)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        fibo(a,b,range-1);
    }
    
}
int main()
{
    int range;
    cin>>range;
    cout<<0<<" "<<1<<" ";
    fibo(0,1,range-2);
}
