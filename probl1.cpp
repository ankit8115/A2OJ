#include<iostream>
using namespace std;

int max(int a[],int n)
{
	int num = a[0];
	int idx = 0;
	for(int i = 1;i<n;i++)
	{
		if(num < a[i])
		{
			num = a[i];
			idx = i;
		}
	}
	return idx;
}

int min(int a[],int n)
{
	int num = a[0];
	int idx = 0;
	for(int i = 1;i<n;i++)
	{
		if(num >= a[i])
		{
			num = a[i];
			idx = i;
		}
	}
	return idx;
}

int main()
{
	int n;
	cin>>n;
	int *a = new int [n];
	for(int i = 0;i<n ;i++)
		cin>>a[i];
	int maxid = max(a,n);
	int minid = min(a,n);

	if(maxid < minid)
		cout<<(maxid + n - 1 - minid);
	else
		cout<<(maxid + n -2 -minid);
	return 0;
}