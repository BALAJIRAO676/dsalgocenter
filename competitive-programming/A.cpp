#include<bits/stdc++.h>
using namespace std;
int dp[100001],h[100001],n,c=0;
int f(int i)
{
	if(dp[i]!=-1)
	return dp[i];
	
	
	
	
	if((i+1)<n && (i+2)<n)
	{
		dp[i]=min((f(i+1)+abs(h[i+1]-h[i])),(f(i+2)+abs(h[i+2]-h[i])));
	}
	else if((i+1 )<n)
	{
		dp[i]=f(i+1)+abs(h[i+1]-h[i]);
	}
	else
	return 0;
	
	return dp[i];
}
int main()
{int i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>h[i];
	memset(dp,-1,sizeof(dp));
	cout<<f(0);
return 0;
}
