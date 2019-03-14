#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int i = 1;
	while(k>=i)
	{
		k = k-i;
		i++;
		i = i%(n+1);
	}
	cout<<k<<endl;
	return 0;
}