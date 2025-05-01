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
    int n = 1;
    char str[100];
    string s;
    while (1)
    {
        cin.getline(str, 100);
        if (str[0] == '#')
            break;
        s = str;
        if (s == "HELLO")
            cout << "Case " << n++ << ": ENGLISH\n";
        else if (s == "HOLA")
            cout << "Case " << n++ << ": SPANISH\n";
        else if (s == "HALLO")
            cout << "Case " << n++ << ": GERMAN\n";
        else if (s == "BONJOUR")
            cout << "Case " << n++ << ": FRENCH\n";
        else if (s == "CIAO")
            cout << "Case " << n++ << ": ITALIAN\n";
        else if (s == "ZDRAVSTVUJTE")
            cout << "Case " << n++ << ": RUSSIAN\n";
        else
            cout << "Case " << n++ << ": UNKNOWN\n";
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
