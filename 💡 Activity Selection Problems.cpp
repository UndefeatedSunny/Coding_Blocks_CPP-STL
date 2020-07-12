#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

bool cmp(pair<ll,ll> &x, pair<ll,ll> &y)
{

    return x.second<y.second;
}
 
int main() 
{
	FAST_IO;
	ll val;
	cin>>val;
	for(ll k=0;k<val;k++)
	{
	    ll n;
	    cin>>n;
	
	    vector<pair<ll,ll>> m;
	    ll n1;
	    ll n2;
	
	    for(ll i=0;i<n;i++)
	    {
	        cin>>n1>>n2;
	        m.push_back(make_pair(n1,n2));
	    }
	
	    sort(m.begin(),m.end(),cmp);
	
	    vector<pair<ll,ll>>::iterator p1;
	    vector<pair<ll,ll>>::iterator p2;
	
	    ll count=1;
	
	    for(p1=m.begin(),p2=m.begin()+1;p2<m.end();++p2) 
	    { 
	        if((*p2).first >= (*p1).second)
	        {
	       // cout<<(*p2).first<<" "<< (*p1).second<<endl;
	            count++;
	            p1=p2;
	        }
        } 
        cout<<count<<endl;
        m.clear();
	}
	return 0;
}
