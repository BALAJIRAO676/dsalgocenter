/*
 program to find maximum sum subarray of size k
 */


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
int a[100]={4,2,1,7,8,1,2,8,1,0};
int maximum_sum_subarray(int k)
{
	int max1=INT_MIN,current_sum=0;
	for(int i=0;i<10;i++)
	{
		current_sum+=a[i];
		
		if(i>=(k-1))
		{
			max1=max(max1,current_sum);
			current_sum-=a[i-(k-1)];
		}
	}
	
	return max1;
}
int main()
{
	//nfs_mw ;
int k;
cout<<"Enter the size of subarray: ";
cin>>k;
cout<<maximum_sum_subarray(k)<<endl;

return 0;
}
