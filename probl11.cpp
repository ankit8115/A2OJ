#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	
	int x1,y1,x2,y2;
	if(x>0 and y>0)
	{
		x = abs(x);
		y = abs(y);
		x1 = 0;
		y1 = x+y;
		x2 = x+y;
		y2 = 0;
	}
	else if(x<0 and y>0)
	{
		x = abs(x);
		y = abs(y);
		x1 = -x-y;
		y1 = 0;
		x2 = 0;
		y2 = x+y;
	}
	else if(x<0 and y<0)
	{
		x = abs(x);
		y = abs(y);
		x1 = -x-y;
		y1 = 0;
		x2 = 0;
		y2 = -x-y;
	}
	else
	{
		x = abs(x);
		y = abs(y);
		x1 = 0;
		y1 = -x-y;
		x2 = x+y;
		y2 = 0;
	}
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	return 0;
}