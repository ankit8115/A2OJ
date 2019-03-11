#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5][5];
	int idx,idy;
	for(int i =0;i<5;i++)
		for(int j =0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j] == 1)
			{
				idx = i;
				idy = j;
			}
		}
	cout<<(abs(2-idx) +abs(2-idy));
	return 0;
}