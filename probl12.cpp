#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int f[n],t[n];
	for(int i = 0;i<n;i++)
	{
		cin>>f[i];
		cin>>t[i];
	}
	int max = INT_MIN;
	for(int i =0 ;i<n;i++)
	{
		if(t[i]>k && max <= (f[i]-t[i]+k))
		{
			max = f[i]-t[i]+k;
		}
		else if(t[i]<=k && max <= f[i])
		{
			max = f[i];
		}
	}
	cout<<max<<endl;
	return 0;
}