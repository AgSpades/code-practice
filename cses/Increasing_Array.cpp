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
    ll n;
    cin >> n;
    ll diff, total_inc = 0;
    vector<ll> arr(n);
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }

    FOR(i, 1, n)
    {
        if (arr[i] < arr[i - 1])
        {
            diff = arr[i - 1] - arr[i];
            total_inc += diff;
            arr[i] = arr[i - 1];
        }
    }

    cout << total_inc;
}

int main()
{
    fastio;
    solve();
    return 0;
}
