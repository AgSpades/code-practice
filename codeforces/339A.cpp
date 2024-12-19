/*Om Namo Narayana~*/
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
    vi v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i] - '0');
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;
}

int main()
{
    fastio;
    int t = 1;
    solve();
    return 0;
}
