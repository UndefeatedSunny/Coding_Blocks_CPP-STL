#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	vector<ll> vec;
	vector<ll>::iterator pos;
	ll lower,upper;
	ll num;
	cin>>num;
	ll val;
	
	for(ll i=0;i<num;i++)
	{
	    cin>>val;
	    vec.emplace_back(val);
	}
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
	    ll v;
	    cin>>v;
	    
	    pos=find(vec.begin(),vec.end(),v);
	    
	    if(pos!=vec.end())
	    {
	        lower=lower_bound(vec.begin(),vec.end(),v)-vec.begin();
	        upper=upper_bound(vec.begin(),vec.end(),v)-vec.begin()-1;
	        cout<<lower<<" "<<upper<<endl;
	    }
	    else 
	    {
	        cout<<-1<<" "<<-1<<endl;
	    }
	}
    return 0;
}
