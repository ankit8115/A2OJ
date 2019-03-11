#include<iostream>
using namespace std;

int main()
{
	int n,ways = 0;
	cin>>n;
	n = n-10;
	if(n <= 0 || n > 11)
		ways = 0;
	else if(n == 10)
		ways = 15;
	else
		ways = 4;
	cout<<ways<<endl;
}