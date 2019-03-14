#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int num;
	if(k%n == 0)
		num = k/n;
	else
		num =(k/n) +1;
	for(int i = 0;i<n;i++)
	{
		if(k>=0 and k-num>=0)
		{
			a[i] = num;
			k = k-num;
		}
		else if(k>=0 and k-num<0)
		{
			a[i] = k;
			k =0;
		}
		else
			a[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cout<<a[(j+i)%n]<<" ";
		}
		cout<<endl;
	}
	return 0;
}