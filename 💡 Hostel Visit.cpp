#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

ll  power(ll n1,ll n2)
{
    return (pow(n1,2)+pow(n2,2));
}

int main() 
{
	FAST_IO;
	ll num,v;
	cin>>num>>v;

	priority_queue<ll> vec;
	
	for(ll i=0;i<num;i++)
	{
	    ll n,n1,n2;
	    cin>>n;
	    if(n==1)
	    {
	        cin>>n1>>n2;
	        if(vec.size()==v)
	        {
	            if(power(n1,n2)<vec.top())
	            {
	                vec.pop();
	                vec.push(power(n1,n2));
	            }
	        }
	        else 
	        {
	            vec.push(power(n1,n2));            
	        }
	        
	    }
	    else if(n==2)
	    {
	        cout<<vec.top()<<endl;
	    }
	}
	
    return 0;
}
