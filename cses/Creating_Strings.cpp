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

set<string> solve(string s)
{
    int n = s.length();
    sort(s.begin(), s.end());
    set<string> unique;
    do
    {
        unique.insert(s);
    } while (next_permutation(s.begin(), s.end()));
    return unique;
}

int main()
{
    fastio;
    string s;
    cin >> s;
    set<string> result = solve(s);
    cout << result.size() << '\n';
    for (auto res : result)
    {
        cout << res << '\n';
    }
    return 0;
}
