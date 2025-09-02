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
    int sum;
    cin >> sum;
    vi bills = {100, 20, 10, 5, 1};
    int cnt = 0;

    for (int bill : bills)
    {
        cnt += sum / bill;
        sum %= bill;
    }
    cout << cnt;
}

int main()
{
    fastio;
    solve();
    return 0;
}
