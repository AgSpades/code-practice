/*
Jai Bajrangbali!
author: agspades
year of code: 2025
template version: 0.1.1
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

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int n;
    scanf("%d", &n);
    n % 2 == 0 ? printf("%d is even\n", n) : printf("%d is odd\n", n);
}

int main()
{
    fastio;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
