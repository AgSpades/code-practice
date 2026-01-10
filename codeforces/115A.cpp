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

vi adj[2005]; // vector<vector<int>>

int dfs(int u)
{
    int m = 0;
    for (int v : adj[u])
    {
        int depth = dfs(v);
        m = max(m, depth);
    }

    return m + 1;
}

void solve()
{
    int n;
    cin >> n;
    vi roots;
    for (int i = 1; i <= n; i++)
    {
        int mngr;
        cin >> mngr;
        if (mngr == -1)
        {
            roots.pb(i);
        }
        else
        {
            adj[mngr].pb(i);
        }
    }

    int mgrps = 0;
    for (int root : roots)
    {
        mgrps = max(mgrps, dfs(root));
    }

    cout << mgrps << '\n';
}

int main()
{
    fastio;
    solve();
    return 0;
}
