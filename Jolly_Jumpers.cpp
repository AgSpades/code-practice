/*
Jai Bajrangbali!
template_author: agspades
year of code: 2026
template version: 0.1.2
*/

/*
Notes: How to check edge cases.
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
    if (!(cin >> n))
        return;

    vi arr(n);
    FOR(i, 0, n)
    cin >> arr[i];

    if (n == 1)
    {
        puts("Jolly");
        return;
    }

    vector<int> flag(n, 0);
    bool f = true;

    FOR(i, 1, n)
    {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff >= 1 && diff <= n - 1 && flag[diff] == 0)
            flag[diff] = 1;
        else
            f = false;
    }

    FOR(i, 1, n) 
    {
        if (flag[i] == 0)
            f = false;
    }

    puts(f ? "Jolly" : "Not jolly");
}

int main()
{
    fastio;
    while (cin)
    {
        solve();
    }
    return 0;
}
