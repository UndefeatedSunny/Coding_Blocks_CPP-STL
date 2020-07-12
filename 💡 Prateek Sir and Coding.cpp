#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	ll num;
	cin>>num;

	vector<ll> vec;
	vector<ll>::iterator p;
	
	for(ll i=0;i<num;i++)
	{
	    ll n1,n2;
	    cin>>n1;
	    if(n1==2)
	    {
	        cin>>n2;
	        vec.emplace_back(n2);
	    }
	    else if(n1==1)
	    {
	        if(vec.empty())
	        {
	            cout<<"No Code"<<endl;
	        }
	        else
	        {
	            ll val=*(vec.end()-1);
	            cout<<val<<endl;
	            vec.pop_back();
	        }
	    }
	}
    return 0;
}
