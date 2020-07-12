// Submission #6896531
#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

bool cmp(pair<string,ll> &x, pair<string,ll> &y)
{
    if(x.second==y.second)
    {
        return (x.first>y.first);
    }
    return x.second<y.second;
}
 
int main() 
{
	FAST_IO;
	ll val;
	cin>>val;
	ll n;
	cin>>n;
	
	vector<pair<string,ll>> m;
	ll num;
	string s;
	
	for(ll i=0;i<n;i++)
	{
	    cin>>s;
	    cin>>num;
	    m.push_back(make_pair(s,num));
	}
	
	sort(m.begin(),m.end(),cmp);
	
	for( auto p=m.end()-1;p>=m.begin();p--) 
	{ 
	    if((*p).second>=val)
	    {
	        cout<<(*p).first<<" "<<(*p).second<<endl;
	    }
        } 
	return 0;
}
