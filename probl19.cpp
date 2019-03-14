#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i = 0;i<n;i++)
		cin>>a[i]>>b[i];
	int min_cap = 0;
	int curr = 0;
	for(int i = 0;i<n;i++)
	{
		curr = curr -a[i]+b[i];
		if(min_cap < curr)
			min_cap = curr;
	}
	cout<<min_cap<<endl;
	return 0;
}