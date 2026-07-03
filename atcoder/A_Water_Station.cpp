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

// Binary Exponentian Function

inline void solve()
{
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        cout << n << '\n';
    }
    else
    {
        int ne = n % 5;
        int nx = 5 - n % 5;
        if (nx > ne)
        {
            cout << n - ne << '\n';
        }
        else
        {
            cout << n + nx << '\n';
        }
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
