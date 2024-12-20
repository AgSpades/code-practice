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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    FOR(i, 0, n - 1)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt;
}

int main()
{
    fastio;
    solve();
    return 0;
}
