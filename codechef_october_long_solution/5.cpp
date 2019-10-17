#include<bits/stdc++.h>
using namespace std;

 
 bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
 
int main()
{
int t;
cin>>t;
while(t--)
{
	vector<vector<int>> g;
	vector<pair<int,int>> v;
	int i,n,e,sig=0;cin>>n>>e;
	int a[n+5]={};
	g.assign(n+1,vector<int>());
   for(i=0;i<e;i++)
   {
	   int x,y;
	   cin>>x>>y;

	g[x].push_back(y);
	g[y].push_back(x);

   }
   if((e%2)==0)
   {
	   cout<<"1\n";
	   for(i=1;i<=n;i++)
	   cout<<"1 ";
	   cout<<"\n";
   }
   else
   {
	   for(i=1;i<=n;i++)
	   {
		   if(g[i].size()%2)
		   sig=1;
		   v.push_back(make_pair(i,g[i].size()));
	   }
	   sort(v.begin(), v.end(), sortbysec); 
	   int sig2=1;int ct=0;
	   if(sig)
	   {
		  for(auto x:v)
		  {
			  if(x.second%2 && sig2)
			  {
				  a[x.first]=2;sig2=0;
			  }
			  if(x.second==0)
			  a[x.first]=2;
		  } 
		  cout<<"2\n";
		  for(i=1;i<=n;i++)
		  {
			  if(a[i]==0)
			  cout<<"1 ";
			  else
			  cout<<a[i]<<" ";
		  }
		  cout<<"\n";
	   }
	  
	   else
	   {
			for(auto x:v)
		  {
			  if(ct<1 && x.second!=0)
			  {
				a[x.first]=2;
				a[g[x.first][0]]=3;
				ct++;
			  }
			  if(x.second==0)
			  a[x.first]=2;
		  }
		  
		   cout<<"3\n";
		  for(i=1;i<=n;i++)
		  {
			  if(a[i]==0)
			  cout<<"1 ";
			  else
			  cout<<a[i]<<" ";
		  }
		  cout<<"\n"; 
	   }
	  
   }
}	
return 0;
}
