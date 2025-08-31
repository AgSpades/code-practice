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

ll rev(int n)
{
    ll ans = 0;
    while (n != 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

inline void solve()
{
    ll x, y;
    cin >> x >> y;
    ll temp = 0;
    for (int i = 0; i < 8; i++)
    {
        temp = rev(x + y);
        x = y;
        y = temp;
    }

    cout << temp << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
