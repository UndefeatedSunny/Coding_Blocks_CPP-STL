#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    deque<int> Q;

    //We have to process first k elements separately
    for (int i = 0; i < k; i++)
    {

        while (!Q.empty() && a[i] > a[Q.back()])
        {
            Q.pop_back();
        }

        Q.push_back(i);
    }

    //Process the remaining elements
    for (int i = k; i < n; i++)
    {
        cout << a[Q.front()] << " ";

        //1. Remove the elements which are not the part of the window(Contraction)
        while ((!Q.empty() && (Q.front() <= i - k)))
        {
            Q.pop_front();
        }

        //2. Remove the elements which are not useful and are in window
        while (!Q.empty() && a[i] >= a[Q.back()])
        {
            Q.pop_back();
        }

        //3. Add the new elements(Expansion)
        Q.push_back(i);
    }

    cout << a[Q.front()];

    return 0;
}
