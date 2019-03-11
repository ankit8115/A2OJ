#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int score = 0,a,b;
	for(int i = 0;i < s1.length();i++)
	{
		a = s1[i];
		b = s2[i];
		if(a-b == 0 || abs(a-b) == 32)
			score = 0;
		else if(a-b > 0)
		{
			if(a > 90 and b <= 90 and abs(a-b)<32)
			{
				score = -1;
				break;
			}
			else
			{
				score = 1;
				break;
			}
		}
		else
		{
			if(b > 90 and a <= 90 and abs(a-b)<32)
			{
				score = 1;
				break;
			}
			else
			{
				score = -1;
				break;
			}
		}
	}
	cout<<score<<endl;
	return 0;
}
