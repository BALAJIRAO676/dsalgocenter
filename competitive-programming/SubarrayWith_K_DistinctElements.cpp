// CPP program to find longest subarray with 
// k or less distinct elements. 
#include <bits/stdc++.h> 
using namespace std; 
template<typename T>
// function to print the longest sub-array 
void longest(T a[], int n, int k) 
{ int ans=INT_MIN;
	unordered_map<T, int> freq; 

	int start = 0, end = 0, now = 0, l = 0; 
	for (int i = 0; i < n; i++) { 

		// mark the element visited 
		freq[a[i]]++; 

		// if its visited first time, then increase 
		// the counter of distinct elements by 1 
		if (freq[a[i]] == 1) 
			now++; 

		// When the counter of distinct elements 
		// increases from k, then reduce it to k 
		while (now > k) { 

			// from the left, reduce the number of 
			// time of visit 
			freq[a[l]]--; 

			// if the reduced visited time element 
			// is not present in further segment 
			// then decrease the count of distinct 
			// elements 
			if (freq[a[l]] == 0) 
				now--; 

			// increase the subsegment mark 
			l++; 
		} 

		// check length of longest sub-segment 
		// when greater then previous best 
		// then change it 
		if (i - l + 1 > ans) 
			{ans=i - l + 1;
				end = i, start = l; 
			}
	} 

	// print the longest sub-segment 
	for (int i = start; i <= end; i++) 
		cout << a[i] << " "; 
} 

// driver program to test the above function 
int main() 
{ 
	//int a[] = { 6, 5, 1, 2, 3, 2, 1, 4, 5 }; 
	char a[] = { 'a','a','b','b','c','c'}; 
	int n = sizeof(a) / sizeof(a[0]); 
	int k = 2; 
	longest(a, n, k); 
	return 0; 
} 
