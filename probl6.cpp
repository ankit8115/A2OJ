#include<iostream>
using namespace std;

int main()
{
	int n,amaz = 0;
	cin>>n;
	int a[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	int max = a[0],min = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i] > max)
		{
			amaz++;
			max = a[i];
		}
		if(a[i] < min)
		{
			amaz++;
			min = a[i];
		}
	}
	cout<<amaz<<endl;
	return 0;
}