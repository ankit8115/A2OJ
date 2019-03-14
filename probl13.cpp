#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,c;
	int count = 0 ,cnt = 0;
	cin>>r>>c;
	char a[r][c];
	for(int i = 0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>a[i][j];

    for(int i =0 ;i<r;i++)
    {
    	for(int j = 0;j<c;j++)
    	{
    		if(a[i][j] == 'S')
    		{
    			count++;
    		}
    	}
    	if(count == 0)
    	{
    		for(int j = 0;j<c;j++)
	    	{
	    		if(a[i][j] == '.')
	    		{
	    			cnt++;
	    			a[i][j] = '0';
	    		}
	    	}
    	}
    	count = 0;
    }
    for(int i =0 ;i<c;i++)
    {
    	for(int j = 0;j<r;j++)
    	{
    		if(a[j][i] == 'S')
    		{
    			count++;
    		}
    	}
    	if(count == 0)
    	{
    		for(int j = 0;j<r;j++)
	    	{
	    		if(a[j][i] == '.')
	    		{
	    			cnt++;
	    			a[j][i] = '0';
	    		}
	    	}
    	}
    	count = 0;
    }
    cout<<cnt<<endl;
    return 0;
}