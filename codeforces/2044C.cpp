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
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int s_a = min(a, m);
    int s_b = min(b, m);
    int rem_s = 2 * m - (s_a + s_b);
    int s_c = min(rem_s, c);

    int total = s_a + s_b + s_c;
    cout << total << "\n";
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
