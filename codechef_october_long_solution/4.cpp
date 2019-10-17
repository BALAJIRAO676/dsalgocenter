#include "bits/stdc++.h"
using namespace std;
//debug() << imie(x) imie(y);
int setBits(unsigned long long int n) {
    int count = 0 ;
    while(n) {
        n &= (n-1) ;
        count ++ ;
    }
    return count ;
}
#define nfs_mw ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	unordered_map<int,int> m,g,p;
void Divisors(int n) 
{ 

    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i && p[i]==0) 
                m[i]++;
                
  
            else // Otherwise count both 
                {
					if(p[n/i]==0)
					m[n/i]++;
					
					if(p[i]==0)
					m[i]++;
				}
				
				
				
				if(n / i != i )
				g[n/i]++;
				
				g[i]++;
        } 
    } 
  
} 


int main()
{
	nfs_mw ;
int t,i;cin>>t;
while(t--)
{
	int n;
m.clear();
p.clear();
g.clear();
	cin>>n;int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		p[a[i]]++;
		
		
		Divisors(a[i]);
		if(p[a[i]]>1)
		m[a[i]]=g[a[i]]-1;
	}
	int ans=INT_MIN;
	for(i=0;i<n;i++)
	{
		//cout<<a[i]<<" "<<m[a[i]]<<"\n";
		ans=max(ans,m[a[i]]);
	}
cout<<ans<<"\n";
}

return 0;
}

/*
13
3 4 5 6 1 2 3 1 8 2 2 3 3 
*/
