/*
Jai Bajrangbali!
template_author: agspades
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
using min_heap = priority_queue<T, vector<T>, greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int n, k;
    cin >> n >> k;
    vi arr(n), res(n);
    FOR(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] <= k && k != 0)
        {
            res[i] = 1;
            k -= arr[i];
        }
        else
        {
            res[i] = 0;
        }
    }

    for (int c : res)
    {
        cout << c;
    }
    cout << '\n';
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
