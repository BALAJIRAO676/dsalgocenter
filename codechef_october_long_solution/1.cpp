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
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
//sorting a pair of vectors (generalizing the code)
//sort(v.begin(),v.end(), type);
bool type(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

int main()
{
	//nfs_mw ;
int n,i,t;
cin>>t;
while(t--)
{
	cin>>n; multiset<int> s;
	int a[n],c=0;
	for(i=0;i<n;i++)
	cin>>a[i];

   int tmin=INT_MAX;
   for(i=0;i<5;i++)
   {
	   if(a[i]<tmin)
	   {
		   tmin=min(tmin,a[i]);
		   c++;
		   //cout<<a[i]<<" ";
	   }
	   
	   s.insert(a[i]);
   }
 
  for(i=5;i<n;i++)
  {
	  auto it=s.begin();
	  if(a[i]<*it)
	  {
		  c++;
		// cout<<a[i]<<" ";
	  }
	  
	  auto itr = s.find(a[i-5]);
if(itr!=s.end()){
    s.erase(itr);
}
	
	  s.insert(a[i]);
	
  }
   cout<<c<<"\n";
	
}

return 0;
}
