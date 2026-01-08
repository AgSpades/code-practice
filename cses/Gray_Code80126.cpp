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
    for (int i = 0; i < (1 << n); i++)
    {
        int val = i ^ (i >> 1); // gray code forumula
        for (int j = n - 1; j >= 0; j--)
        {
            int bit = (val >> j) & 1;
            cout << bit;
        }
        cout << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
