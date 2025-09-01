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
    int n;
    cin >> n;
    vi arr(n);
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }
    int tallest = *max_element(all(arr));
    int tall_idx = -1;
    FOR(i, 0, n)
    {
        if (arr[i] == tallest)
        {
            tall_idx = i;
            break;
        }
    }

    int shortest = *min_element(all(arr));
    int short_idx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == shortest)
        {
            short_idx = i;
            break;
        }
    }

    int cost_max = tall_idx, cost_min;
    if (short_idx > tall_idx)
    {
        cost_min = n - 1 - short_idx;
    }
    else
    {
        cost_min = n - 1 - (short_idx + 1);
    }

    cout << cost_max + cost_min << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}
