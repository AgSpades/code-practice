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

ll sumN(int n)
{
    ll n_ll = n;
    return (n_ll * (n_ll + 1)) / 2;
}

inline void solve()
{
    int n;
    cin >> n;
    if (sumN(n) % 2 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        ll tot = sumN(n);
        ll target = tot / 2;
        vi set1, set2;
        for (int i = n; i >= 1; i--)
        {
            if (i <= target)
            {
                set1.pb(i);
                target -= i;
            }
            else
            {
                set2.pb(i);
            }
        }
        sort(all(set1));
        sort(all(set2));
        cout << set1.size() << '\n';
        for (const int &a : set1)
        {
            cout << a << " ";
        }
        cout << '\n';
        cout << set2.size() << '\n';
        for (const int &a : set2)
        {
            cout << a << " ";
        }
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
