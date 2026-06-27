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
    int r, c;
    cin >> r >> c;
    vector<string> img(r);
    FOR(i, 0, r)
    cin >> img[i];

    int t = r, b = -1;
    int l = c, ri = -1;
    FOR(i, 0, r)
    {
        FOR(j, 0, c)
        {
            if (img[i][j] == '#')
            {
                t = min(t, i);
                b = max(b, i);
                l = min(l, j);
                ri = max(ri, j);
            }
        }
    }

        for (int i = t; i <= b; i++)
    {
        for (int j = l; j <= ri; j++)
        {
            cout << img[i][j];
        }
        cout << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
