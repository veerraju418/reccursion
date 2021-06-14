#include<bits/stdc++.h>
using namespace std;
void permutation_str(string s,string t,vector<int>&ds)
{
	if(s.size()==t.size())
	{
		cout<<t<<"\n";
		return;
	}
	for(int i=0;i<s.size();i++)
	{
		if(ds[i]==0)
		{
			ds[i]=1;
			permutation_str(s,t+s[i],ds);
			ds[i]=0;
		}
	}
}
int main()
{
	string s;
	cin>>s;
	vector<int>v;
	for(int i=0;i<s.size();i++)
	{
		v.push_back(0);
	}
	permutation_str(s,"",v);
}
