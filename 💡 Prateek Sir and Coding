#include <bits/stdc++.h>
#define ll long long int
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;

int main() 
{
	FAST_IO;
	ll num;
	cin>>num;
	string s;
	
	vector<string> vec;
	vector<string>::iterator p;
	
	for(ll i=0;i<num;i++)
	{
	    cin>>s;
	    vec.emplace_back(s);
	}
	
	sort(vec.begin(),vec.end());
	string s1,s2;

	for(p=vec.begin();p<vec.end()-1;p++)
	{
	    s1=*p;
	    s2=*(p+1);
	    //cout<<s1<<" "<<s2<<endl;;
	    
	    if(s1[0]==s2[0]&&s1[s1.length()-1]==s2[s1.length()-1] && s1.length()<s2.length())
	    {
	        swap(*p,*(p+1));
	    }
	}
	for(p=vec.begin();p<vec.end();p++)
	{ 
	    cout<<*p<<endl;
	}
    return 0;
}
