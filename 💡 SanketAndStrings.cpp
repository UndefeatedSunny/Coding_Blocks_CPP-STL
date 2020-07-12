#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
   
    int k;
    cin >> k;
    string str;
    cin >> str;
    int freq[2] = {0};
    ll n = str.length();
    ll ans = 0, left = 0;
    for (ll i = 0; i < n; i++)
    {
        char temp = str[i];
        freq[temp - 'a']++;
        if (min(freq[0], freq[1]) > k)
        {
            freq[str[left] - 'a']--;
            left++;
        }
        else 
            ans++;
    }
    cout << ans << endl;
    return 0;
}
