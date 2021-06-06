#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="MADAM";
    int l=0;
    int r=4;
    int fl=0;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            fl=1;
            break;
        }
        l++;
        r--;
    }
    if(fl==0)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    
}