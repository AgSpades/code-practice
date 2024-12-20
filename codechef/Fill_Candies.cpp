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
    int n, k, m;
    cin >> n >> k >> m;
    int mult = k * m;
    if (n <= mult)
    {
        cout << 1 << endl;
    }

    else if (n % mult == 0)
    {
        cout << n / mult << endl;
    }
    else
    {
        cout << n / mult + 1 << endl;
    }
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
