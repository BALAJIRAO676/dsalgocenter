#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		long long n,m,que,i,x,y,le=0,re=0,lo=0,ro=0;
		cin>>n>>m>>que;
		map<long long,long long> l,r;
		while(que--)
		{
			cin>>x>>y;
			l[x]++;r[y]++;
			
		}
		
		for(i=1;i<=n;i++)
		{
			if(l[i]%2)
			{
				lo++;
			}
			else
			le++;
		}
			for(i=1;i<=m;i++)
		{
			if(r[i]%2)
			{
				ro++;
			}
			else
			re++;
		}
		//cout<<le<<" "<<re<<" "<<lo<<" "<<ro<<"\n";
		cout<<le*ro + lo*re<<"\n";
		
	}
return 0;
}
