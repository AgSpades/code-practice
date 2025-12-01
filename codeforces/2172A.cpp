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
    vi arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    int mx = arr[0], mn = arr[2];
    if (abs(mx - mn) >= 10)
    {
        cout << "check again\n";
    }
    else
    {
        cout << "final " << arr[1] << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
