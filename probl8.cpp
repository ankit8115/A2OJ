#include<iostream>
using namespace std;
int main()
{
	int n,sum = 0,odds = 0,even = 0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2==0)
			even++;
		else
			odds++;
	}
	if(sum%2 == 0)
		cout<<even<<endl;
	else
		cout<<odds<<endl;
	return 0;
}