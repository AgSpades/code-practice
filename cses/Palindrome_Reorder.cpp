/*
Jai Bajrangbali!
template_author: agspades
year of code: 2025
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
ll binpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

inline void solve()
{
    string s;
    cin >> s;
    int count[26] = {0};
    for (char c : s)
    {
        count[c - 'A']++;
    }
    int oddCounts = 0;
    char pivot;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] & 1)
        {
            oddCounts++;
            pivot = 'A' + i;
        }
    }

    if (oddCounts > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        string firstHalf = "";
        for (int i = 0; i < 26; i++)
        {
            int numToAdd = count[i] / 2;
            for (int j = 0; j < numToAdd; j++)
            {
                firstHalf += (char)('A' + i);
            }
        }
        string secondHalf(firstHalf.rbegin(), firstHalf.rend());
        if (oddCounts == 1)
            cout << firstHalf + pivot + secondHalf << '\n';
        else
            cout << firstHalf + secondHalf << '\n';
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
