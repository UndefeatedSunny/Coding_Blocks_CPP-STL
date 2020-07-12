#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;


ll compare(string s1,string s2)
{
    string x1=s1+s2;    // Also use append here.
    string x2=s2+s1;
    if(x1>x2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void max_value(vector<string> vec)
{
    sort(vec.begin(),vec.end(),compare);
    vector<string>::iterator p;
    
    for(p=vec.begin();p<vec.end();p++)
    {
        cout<<*p;
    }
    cout<<endl;
}


int main() 
{
	FAST_IO;
	ll num;
	cin>>num;
	for(ll j=0;j<num;j++)
	{
	    ll n;
	    cin>>n;
	    vector<string> vec;
	    string s;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>s;
	        vec.emplace_back(s);
	    }
	    
	    max_value(vec);
	    
	    vec.clear();
	}
    return 0;
}
