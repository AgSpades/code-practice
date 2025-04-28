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
    string f_name;
    cin >> f_name;
    size_t pos = f_name.rfind('.');

    // npos is returned when the above method fails
    if (pos != string::npos)
    {
        string extension = f_name.substr(pos);
        cout << extension << endl;
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
