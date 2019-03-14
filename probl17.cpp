#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum = 0;
	int flag = 0;
	int a[n][3];
	for(int i = 0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	for(int i = 0;i<3;i++)
	{
		sum = 0;
		for(int j = 0;j<n;j++)
		{
			sum = sum + a[j][i];
		}
		if(sum!=0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		cout<<"NO"<<endl;
	else
		cout<<"YES\n";
	return 0;
}