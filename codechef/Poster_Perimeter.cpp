/*Om Namo Narayana~*/
#include <bits/stdc++.h>
using namespace std;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pb push_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int min_diff = INT_MAX;

    for (int l = 1; l <= n; l++)
    {
        for (int w = 1; w <= m; w++)
        {
            int perimeter = 2 * (l + w);
            int diff = abs(perimeter - k);
            min_diff = min(min_diff, diff);
        }
    }

    cout << min_diff << endl;
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
