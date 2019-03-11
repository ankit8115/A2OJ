#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	string s = "";
	for(int i=0;i<s1.length();i++)
	{
		s += ((s1[i] == s2[i]) ? '0' : '1');
	}
	cout<<s;
	return 0;
}