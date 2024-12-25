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
#define FOR(i, a, b) for (int i = a; i < b; ++i)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    unordered_map<int, int> mp;
    FOR(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]] = max(mp[a[i]], i + 1);
    }
    int pts = 0;
    for (const auto &x : mp)
    {
        pts += x.second;
    }
    cout << pts << '\n';
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
