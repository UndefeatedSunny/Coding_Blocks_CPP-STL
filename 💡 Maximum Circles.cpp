#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    if((a.first+a.second)==(b.first+b.second)){
		return (a.first-a.second)<(b.first-b.second);
	}else{
		return (a.first+a.second)<(b.first+b.second);
	}
}
int main() {
    int ans = 1;
    int n,c,r;
    cin>>n;
    vector< pair<int,int> > v;

    for(int i=0;i<n;i++){
        cin>>c>>r;
        v.push_back(make_pair(c,r));
    }

sort(v.begin(),v.end(),comp);

int val = v[0].first+v[0].second;

for(int i=0;i<n-1;i++){
    if(val <= v[i+1].first-v[i+1].second){
        ans++;
        val = v[i+1].first+v[i+1].second;
    }

}

cout<<n-ans;

}
