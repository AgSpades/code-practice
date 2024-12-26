/*
Om Namo Narayana~
author: agspades
year of code: 2024
template version: 0.1
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
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (int i = a; i < b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll n;
    cin >> n;
    int cnt = 0, fl = 0;
    while (n != 0)
    {
        int unit = n % 10;
        if (unit == 4 || unit == 7)
        {
            fl = 1;
            cnt++;
        }
        n /= 10;
    }
    if (fl == 0)
    {
        cout << "NO";
    }
    else
    {
        if (cnt == 4 || cnt == 7)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
