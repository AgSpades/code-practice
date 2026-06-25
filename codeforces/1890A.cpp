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
    int b1 = 0, b2 = 0, cb1 = 0, cb2 = 0;
    FOR(i, 0, n)
    {
        int temp;
        cin >> temp;
        if (b1 == 0 || b1 == temp)
        {
            b1 = temp;
            cb1++;
        }
        else if (b2 == 0 || b2 == temp)
        {
            b2 = temp;
            cb2++;
        }
    }
    puts(
        cb1 == n                                  ? "Yes" // single element
        : (cb1 + cb2 == n && abs(cb1 - cb2) <= 1) ? "Yes"
                                                  : "No");
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
