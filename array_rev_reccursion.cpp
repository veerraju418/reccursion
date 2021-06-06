#include<bits/stdc++.h>
using namespace std;
void rev(int l,int r,int a[])
{
    if(l>=r)
    {
        return;
    }
    swap(a[l],a[r]);
    rev(l+1,r-1,a);

}
int main()
{
    int arr[]={1,2,3,4,5};
    rev(0,4,arr);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}