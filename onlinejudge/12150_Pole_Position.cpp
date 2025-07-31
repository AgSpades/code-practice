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
#define FOR(i, a, b) for (int i = a; i <= b; i++)

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main()
{
    fastio;
    int n;
    while (cin >> n && n)
    {
        vi grid(n + 1, 0);
        bool valid = true;
        FOR(i, 1, n)
        {
            int car, pos;
            if (!(cin >> car >> pos))
            { // Check input validity
                valid = false;
                break;
            }
            int begin = i + pos;
            if (begin < 1 || begin > n || grid[begin] != 0)
            {
                valid = false;
            }
            else
            {
                grid[begin] = car;
            }
        }
        if (!valid)
        {
            cout << -1 << '\n';
        }
        else
        {
            FOR(i, 1, n)
            {
                cout << grid[i];
                if (i < n)
                    cout << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}