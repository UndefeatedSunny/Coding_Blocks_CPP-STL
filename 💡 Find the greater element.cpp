#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	ll n;
	cin>>n;
	map<ll,ll> m;
	ll val;
	for(ll i=0;i<n;i++)
	{
	    cin>>val;
	    m[val]++;
	}
	
	vector<pair<ll,ll>> vec(m.begin(),m.end());
	
	vector<pair<ll,ll>>::iterator p;
	
	for(p=vec.begin();p<vec.end()-1;p++)
	{
	    for(ll i=0;i<(*p).second;i++)
	    {
	        cout<<(p+1)->first<<" ";
	    }
	}
	
	for(ll i=0;i<(*(vec.end()-1)).second;i++)
	{
	    cout<<-1<<" ";
	}
	return 0;
}
