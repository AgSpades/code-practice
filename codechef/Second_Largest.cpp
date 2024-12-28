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
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else
        {
            cout << a << endl;
        }
    }
    else
    {
        if (b > c)
        {
            if (a > c)
            {
                cout << a << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else
        {
            cout << b << endl;
        }
    }
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
