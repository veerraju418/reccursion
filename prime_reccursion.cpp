#include<bits/stdc++.h>
using namespace std;
bool isprime(int i,int num)
{
    if(i*i<=num)
    {
        if(num%i==0)
        {
            return false;
        }
        return isprime(++i,num);
    }
    return true;
}
int main(){
    int n;
    cin>>n;//9
    if(isprime(2,n))
    {
        cout<<"prime";
    }
    else{
        cout<<"Not Prime";
    }
}