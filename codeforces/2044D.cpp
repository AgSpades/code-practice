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

    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vi b(n);
    unordered_map<int, int> freq;
    int mode = 0;
    int mode_count = 0;

    for (int i = 0; i < n; ++i)
    {
        int current = a[i];

        if (freq[current] >= mode_count)
        {
            b[i] = current;
            mode = current;
            mode_count = freq[current] + 1;
        }
        else
        {
            b[i] = current;
        }

        freq[b[i]]++;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
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
