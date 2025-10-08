/*
Jai Bajrangbali!
template_author: agspades
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
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int n;
    cin >> n;
    ll ways = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll tp = ((i * i) * (i * i - 1)) / 2;
        ll kp = 4 * (i - 1) * (i - 2);
        ways = tp - kp;
        cout << ways << endl;
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
