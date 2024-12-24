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
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (char c : s)
    {
        if (islower(c))
            lower++;
        else
            upper++;
    }
    if (lower >= upper)
    {
        for (char c : s)
            cout << (char)tolower(c);
    }
    else
    {
        for (char c : s)
            cout << (char)toupper(c);
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
