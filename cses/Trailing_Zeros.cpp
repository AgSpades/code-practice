/*
Jai Bajrangbali!
template_author: agspades
year of code: 2025
template version: 0.1.2
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

// Binary Exponentian Function
ll binpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

inline void solve()
{
    ll n;
    cin >> n;
    ll zeros = 0;
    for (ll i = 5; i <= n; i *= 5)
    {
        zeros = zeros + n / i;
    }
    cout << zeros << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
