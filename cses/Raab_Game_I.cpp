/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
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
    int n, a, b;
    cin >> n >> a >> b;
    if ((a + b) > n)
    {
        cout << "NO\n";
        return;
    }
    if ((a > 0 && b == 0) || (b > 0 && a == 0))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vi p1, p2;
    int drws = n - (a + b);
    for (int i = 1; i <= drws; i++)
    {
        p1.pb(i);
        p2.pb(i);
    }
    vi actives;
    for (int i = drws + 1; i <= n; i++)
    {
        actives.pb(i);
    }
    p1.insert(p1.end(), actives.begin(), actives.end());

    if (!actives.empty())
    {
        rotate(actives.begin(), actives.begin() + a, actives.end());
    }

    p2.insert(p2.end(), actives.begin(), actives.end());
    for (int i = 0; i < n; i++)
        cout << p1[i] << (i == n - 1 ? "" : " ");
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << p2[i] << (i == n - 1 ? "" : " ");
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
