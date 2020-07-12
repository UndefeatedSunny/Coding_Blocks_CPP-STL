#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

 
int main() 
{
	FAST_IO;
	ll n;
	cin>>n;
	unordered_map<ll,ll> m;
	ll val;
	for(ll i=0;i<n;i++)
	{
	    cin>>val;
	    m[val]++;
	}
	ll max=0;
	ll pos=0;
	
	unordered_map<ll,ll>::iterator p;
	
	for(p=m.begin();p!=m.end();p++)
	{
	    if((*p).second>max)
	    {
	        pos=(*p).first;
	        max=(*p).second;
	    }
	}
	cout<<pos;
	return 0;
}
