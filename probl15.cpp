#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count = 0;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i].compare("X++") == 0 || s[i].compare("++X") == 0)
			count++;
		else if(s[i].compare("X--") == 0 || s[i].compare("--X") == 0)
			count--;
	}
	cout<<count<<endl;

}