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

inline void solve()
{
    string s;
    cin >> s;
    int k0 = 0, k1 = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            k0++;
            if (k1 < 7)
                k1 = 0;
        }
        if (c == '1')
        {
            k1++;
            if (k0 < 7)
                k0 = 0;
        }
    }

    (k0 >= 7 || k1 >= 7) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
