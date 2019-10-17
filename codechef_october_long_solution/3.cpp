#include "bits/stdc++.h"
using namespace std;
//debug() << imie(x) imie(y);

#define nfs_mw ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
	//nfs_mw ;
	
	// **Take k long long
int t,i;
cin>>t;
while(t--)
{
	long long n,k,no,ko;
	cin>>n>>k;
	no=n;
	ko=k;
	int main[n],main1[n],main2[n];
	n--;k--;
	for(i=0;i<=n;i++)
	{
		cin>>main[i];
		main1[i]=main[i];
	}
	
	if(k<=n)
	{
		for(i=0;i<=k;i++)
		{
			main[i]=main[i]^main[n-(i%(n+1))];
			cout<<main[i]<<" ";
		}
		for(i=k+1;i<=n;i++)
		cout<<main[i]<<" ";
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			main1[i]=main1[i]^main1[n-(i%(n+1))];
			main2[i]=main1[i];
		}
		for(i=0;i<=n;i++)
		{
			main2[i]=main2[i]^main2[n-(i%(n+1))];
		}
		
		 
		if((((k+1)/(n+1))%3)==0)
		{
			if(no%2)
			main[no/2]=0;
			for(i=0;i<((k+1)%(n+1)) ;i++)
			{
				main[i]=main[i]^main[n-(i%(n+1))];
				
			}
			for(i=0;i<=n;i++)
			cout<<main[i]<<" ";
		}
		else if((((k+1)/(n+1))%3)==1)
		{
			//for(i=0;i<=n;i++)
			//cout<<main1[i]<<" ";
			//cout<<"\n";
			for(i=0;i<((k+1)%(n+1));i++)
			{
				main1[i]=main1[i]^main1[n-(i%(n+1))];
				
			}
			for(i=0;i<=n;i++)
			cout<<main1[i]<<" ";
		}
		else if((((k+1)/(n+1))%3)==2)
		{
			for(i=0;i<((k+1)%(n+1)) ;i++)
			{
				main2[i]=main2[i]^main2[n-(i%(n+1))];
				
			}
			for(i=0;i<=n;i++)
			cout<<main2[i]<<" ";
		}
	}
	cout<<"\n";
}


return 0;
}
