#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	ll num;
	cin>>num;
	for(ll i=0;i<num;i++)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    
	    next_permutation(arr,arr+n);
	    
	    for(ll j=0;j<n;j++)
	    {
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
