#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;
 
int main() 
{
	FAST_IO;
	ll n1,n2;
	cin>>n1>>n2;
	ll arr[n1*n2];
	for(ll i=0;i<n1*n2;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+(n1*n2));

	for(ll i=0;i<n1*n2;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
