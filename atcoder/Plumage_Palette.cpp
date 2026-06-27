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
    int n, m;
    cin >> n >> m;
    vi A(n), B(n), D(n);
    vvi change(m + 1);
    vi cnt(n + 1, 0);
    FOR(i, 0, n)
    {
        cin >> A[i] >> D[i] >> B[i];
        cnt[A[i]]++;
        change[D[i]].pb(i);
    }
    int d = 0;
    FOR(i, 1, n + 1)
    {
        if (cnt[i] > 0)
            d++;
    }
    FOR(day, 1, m + 1)
    {
        for (int bird : change[day])
        {
            int o = A[bird];
            int n = B[bird];
            cnt[o]--;
            if (cnt[o] == 0)
                d--;
            if (cnt[n] == 0)
                d++;
            cnt[n]++;
        }
        cout << d << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
