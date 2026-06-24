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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int d = 0;
    bool flag = false;
    FOR(i, 0, n)
    {
        if (s[i] == '.')
            d++;
        if (i != 0 && i != n - 1 && (s[i - 1] == '.' && s[i + 1] == '.' && s[i] == '.'))
        {
            flag = true;
        }
    }

    flag &&d >= 3 ? cout << 2 << '\n' : cout << d << '\n';
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
