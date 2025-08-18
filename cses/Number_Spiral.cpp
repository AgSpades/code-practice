/*
Jai Bajrangbali!
author: agspades
year of code: 2025
template version: 0.1.1
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
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    ll y, x;
    cin >> y >> x;
    if (y > x)
    {
        ll ans = (y - 1) * (y - 1);
        ll add = 0;
        if (y & 1)
        {
            add = x;
        }
        else
        {
            add = 2 * y - x;
        }
        cout << ans + add << '\n';
    }
    else
    {
        ll ans = (x - 1) * (x - 1);
        ll add = 0;
        if (x % 2 == 0)
        {
            add = y;
        }
        else
        {
            add = 2 * x - y;
        }
        cout << ans + add << '\n';
    }
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
