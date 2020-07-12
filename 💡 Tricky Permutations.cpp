#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	
	ll val=1;
	
	for(ll m=1;m<=s.length();m++)
	{
	    val*=m;
	}
	ll count=1;
	//cout<<val;
	
	for(ll m=0;m<s.length();m++)
	{
	    if(s[m]==s[m+1])
	    {
	        count++;
    	}
    	else 
    	{
    	    ll a=1;
    	    for(ll k=1;k<=count;k++)
    	    {
    	        a*=k;
    	    }
    	    val/=a;
    	    count=1;
    	}
	}
	//cout<<val;
	
	
	
	set<string> vec;
	set<string>::iterator p;
	for(ll i=0;i<val;i++)
	{
	    next_permutation(s.begin(),s.end());
	    vec.insert(s);
	}
	
	for(p=vec.begin();p!=vec.end();p++)
	{
	    cout<<*p<<endl;
	}
	
    return 0;
}
