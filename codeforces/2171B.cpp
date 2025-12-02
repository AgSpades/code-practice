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
    int n;
    if (!(cin >> n))
        return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; ++i)
    {
        if (a[i] == -1)
        {
            a[i] = 0;
        }
    }

    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = 0;
        a[n - 1] = 0;
    }
    else if (a[0] == -1)
    {

        a[0] = a[n - 1];
    }
    else if (a[n - 1] == -1)
    {
        a[n - 1] = a[0];
    }

    int min_value = abs(a[n - 1] - a[0]);

    cout << min_value << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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
