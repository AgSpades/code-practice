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

    vi dp(n + 1, 0);

    dp[0] = 1;

    for (int sum = 1; sum <= n; sum++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            if (sum - dice >= 0)
            {
                dp[sum] = (dp[sum] + dp[sum - dice]) % MOD;
            }
        }
    }
    cout << dp[n] << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
