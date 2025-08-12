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
    int n;
    cin >> n;
    int x, ans = 0;
    for (int i = 1; i <= n; i++)
        ans ^= i;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        ans ^= x;
    }
    cout << ans;
}

int main()
{
    fastio;
    solve();
    return 0;
}
