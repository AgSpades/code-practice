/*
Om Namo Narayana~
author: agspades
year of code: 2024
template version: 0.1
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pb push_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while (t--)
    {
        FOR(i,0,n-1)
        {
            if (q[i] == 'B' && q[i + 1] == 'G')
            {
                swap(q[i], q[i + 1]);
                i++; 
            }
        }
    }
    cout<<q<<'\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
