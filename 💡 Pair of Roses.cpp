#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	ll num;
	cin>>num;
	
	for(ll i=0;i<num;i++)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    ll money;
	    cin>>money;
	    
	    sort(arr,arr+n);
	    ll min=1000001;
	    ll p1=0,p2=0;
	    
	    ll srt=0;
	    ll end=n-1;
	    
	    while(srt<end)
	    {
	        if(arr[srt]+arr[end]==money)
	        {
	            if(arr[end]-arr[srt]<=min)
	            {
	                p1=arr[srt];
	                p2=arr[end];
	                min=arr[end]-arr[srt];
	            }
	            srt++;
	            end--;
	        }
	        if(arr[srt]+arr[end]>money)
	        {
	            end--;
	        }
	        else if(arr[srt]+arr[end]<money)
	        {
	            srt++;
	        }
	    }
	    cout<<"Deepak should buy roses whose prices are "<<p1<<" "<<"and"<<" "<<p2<<"."<<endl;
	}
	return 0;

}
