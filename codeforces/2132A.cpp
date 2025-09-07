/*
Jai Bajrangbali!
template_author: agspades
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
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

inline void solve()
{
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;
    deque<char> result;
    for (char c : a)
        result.push_back(c);

    for (int i = 0; i < b.size(); i++)
    {
        if (c[i] == 'D')
        {
            result.push_back(b[i]);
        }
        else
        {
            result.push_front(b[i]);
        }
    }

    string r_string = "";
    for (char c : result)
    {
        r_string += c;
    }

    cout << r_string << '\n';
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
