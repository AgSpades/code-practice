/*
Jai Bajrangbali!
author: agspades
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
using min_heap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int x, h;
    cin >> x >> h;
    if (x <= 4)
    {
        cout << h << endl;
    }
    else
    {
        cout << (x - 4) * 24 + h << endl;
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
