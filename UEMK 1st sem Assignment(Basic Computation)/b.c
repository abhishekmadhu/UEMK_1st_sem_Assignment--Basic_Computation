
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,n,z,m,o,x;
	long long int a[100050];
	cin>>t;
	while(t--)
	{
		cin>>n;
		m=x=o=z=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			o++;
			else if(a[i]==0)
			z++;
			else if(a[i]==-1)
			m++;
			else
			x++;
			
		}
		if(m>0&&x>0)
		{
		    cout<<"no";
		}
		else
		{
		    if(m>1)
		    {
		        if(o>0)
		        cout<<"yes";
		        else
		        cout<<"no";
		    }
		    else if(x>0)
		    {
		        if(x>1)
		        cout<<"no";
		        else
		        cout<<"yes";
		    }
		    else
		    {
		        cout<<"yes";
		    }
		}
		cout<<endl;
	}
