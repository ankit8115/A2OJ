#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int j = 0,k=1;
	for(int i = 1;i <= n;i++)
	{
		for(int p = 1;p <= n;p++)
		{
			if(p == 1)
				cout<<i<<" ";
			else
			{
				int var = n-k;
				while(var < 0)
					var = var+n;
				cout<<(i+n*(p-1) +(var -(i-1)))<<" ";
				k++;
			}

		}
		cout<<endl;
	}
}
